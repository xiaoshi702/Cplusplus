#include <iostream>
using namespace std;

class myDate
{
public:
    myDate();
    myDate(int y,int m,int d);
    myDate(myDate&my);
    void printMydate(myDate) const;
    ~myDate(){cout<<"������һ������"<<endl;}
private:
int year;int month;int day;
};

myDate::myDate()
{
    year=1996;month=7;day=8;
}

myDate::myDate(int y,int m,int d)
{
    year=y;
    month=m;
    day=d;
    cout<<"������һ������"<<endl;
}

myDate::myDate(myDate&my)
{
    year=my.year;
    month=my.month;
    day=my.day;
    cout<<"���ƹ�����һ������"<<endl;
}


void myDate::printMydate(myDate) const
{
    cout<<year<<'\t'<<month<<'\t'<<day<<endl;
    return;
}

int main()
{
    myDate date;
    date.printMydate(date);
    date.~myDate();
    cout<<"�Һ��Ѱ�"<<endl;
    system("pause");
    return 0;
}