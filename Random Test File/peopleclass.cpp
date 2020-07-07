//People（人员）类
    //属性:number,sex,birthday,id

//1.要求：出生日期声明为一个“日期”类内嵌子对象
//2.用成员函数实现对人员信息的录入和显示
//3.包括构造函数、析构函数、拷贝构造函数、内联成员函数、联合。
#include <iostream>
using namespace std;

enum sex{male=1,female};

class People
{
private:
    int nums;
    sex gender;
    unsigned int id;
    //int year,month,day;
public:
    People(int n,sex g,unsigned int i){
        nums=n;
        gender=g;
        id=i;
        //year=y;
        //month=m;
        //day=d;
        cout<<"构造了一个函数"<<endl;
    }
    ~People(){cout<<"析构了一个函数"<<endl;}
    
    int GetNums() const{return nums;}
    sex GetGender() const{return gender;}
    unsigned int GetId() const{return id;}

    void setNums(int n){nums=n;}
    void setGender(sex g){gender=g;cout<<gender<<endl;}
    void setId(unsigned int i){id=i;cout<<id<<endl;}
};

int main()
{
    int t;
    sex gen;
    unsigned int s;
    People p(t,gen,s);
    cout<<"Enter your infomation!"<<endl;
    cin>>t;
    //cin>>gen;
    cin>>s;
    p.setNums(t);
    cout<<p.GetNums()<<endl;
    //p.setGender();
    cin>>s;
    cout<<p.GetId()<<endl;
    system("pause");
    return 0;
}
