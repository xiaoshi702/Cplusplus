//People����Ա����
    //����:number,sex,birthday,id

//1.Ҫ�󣺳�����������Ϊһ�������ڡ�����Ƕ�Ӷ���
//2.�ó�Ա����ʵ�ֶ���Ա��Ϣ��¼�����ʾ
//3.�������캯���������������������캯����������Ա���������ϡ�
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
        cout<<"������һ������"<<endl;
    }
    ~People(){cout<<"������һ������"<<endl;}
    
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
