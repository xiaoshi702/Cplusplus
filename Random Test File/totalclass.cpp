#include <iostream>
using namespace std;

enum gender{male=1,female};

class student
{
public:
    student();
    student(char n,int a,gender s,unsigned int m);
    ~student(){cout<<"析构了一个学生对象"<<endl;}
    void setstudent(char,int,gender,unsigned int);
    void setstudent(student);
    student getstudent();
    char getname();
    void printstudent() const;

private:
char name;int age;gender sex;unsigned int math;
};

student::student()
{
    name='zhangsan';age=18;sex=male;math=80;
}

student::student(char n,int a,gender s,unsigned int m)
{
    char name=n;
    int age=a;
    gender sex=s;
    unsigned int math=m;
}

void student::setstudent(char n,int a,gender s,unsigned int m)
{
    name=n;
    age=a;
    sex=s;
    math=m;
}

void student::setstudent(student oneStudent)
{
    name=oneStudent.name;
    age=oneStudent.age;
    sex=oneStudent.sex;
    math=oneStudent.math;
}

student student::getstudent()
{
    return *this;
}

char student::getname()
{
    return name;
}

void student::printstudent() const
{
    cout<<name<<'---'<<age<<'---'<<sex<<'---'<<math<<endl;
    return;
}

int main()
{
    student ss;
    ss.printstudent();
    ss.setstudent('xiaoling',20,female,90);
    system("pause");
    return 0;
}


