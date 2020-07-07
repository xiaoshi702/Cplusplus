#include <iostream>
using namespace std;

class myDate{
public:
    myDate();
    myDate(int,int,int);
    void setDate(int,int,int);
    void setDate(myDate);
    myDate getDate();
    void setYear(int);
    int getMonth();
    void printDate() const;
    ~myDate(){cout<<"析构了一个函数"<<endl;}
private:
    int year;
    int month;
    int day;
};


myDate::myDate()
{
    year=1970;month=1;day=1;    
}
myDate::myDate(int y,int m,int d)
{
    year=y;month=m;day=d;
}

void myDate::setDate(int y,int m,int d)
{
    year=y;month=m;day=d;
    return;
}

void myDate::setDate(myDate oneDay)
{
    year=oneDay.year;month=oneDay.month;day=oneDay.day;
    return ;
}

myDate myDate::getDate()
{
    return *this;
}

void myDate::setYear(int y)
{
    year=y;
    return;
}

int myDate::getMonth()
{
    return month;
}

void myDate::printDate() const
{
    cout<<"year is:"<<year<<'\t';
    cout<<"month is:"<<month<<'\t';
    cout<<"day is:"<<day<<'\t';
    cout<<year<<'/'<<month<<'/'<<day<<endl;
    return;
}

int main()
{
    int p,q,r;
    myDate date(1996,7,8);
    date.printDate();
    cout<<"Please enter one year:";
    cin>>p;
    cout<<"Please enter one month:";
    cin>>q;
    cout<<"Please enter one day:";
    cin>>r;
    date.setDate(p,q,r);
    date.printDate();
    date.~myDate();
    system("pause");
    return 0;
}

