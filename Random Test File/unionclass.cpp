#include <iostream>
#include <string>
using namespace std;

class ExamInfos{
    private:
    string name;
    enum {GRADE,PASS,PERCENTAGE} mode;//计分方式
    union {
        char grade;
        bool pass;
        int percent;
    };
    public:
        ExamInfos(string name,char grade):name(name),mode(GRADE),grade(grade){}
        ExamInfos(string name,char grade):name(name),mode(PASS),pass(pass){}
        ExamInfos(string name,char grade):name(name),mode(PERCENTAGE),percent(percent){}
    void show();
};

void ExamInfos::show(){
    cout << name <<":";
    switch(mode){
        case GRADE:cout<<grade; break;
        case PASS:cout<<(pass?"PASS":"FAIL");break;
        case PERCENTAGE:cout<<percent;break;
    }
    cout << endl;
}

int main()
{
    ExamInfos course1("English",'B');
    ExamInfos course2("Calculus",true);
    ExamInfos course3("C++ Programming",85);
    course1.show();
    course2.show();
    course3.show();
    system("pause");
    return 0;
}