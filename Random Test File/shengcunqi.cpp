#include <iostream>
using namespace std;

int i = 1; //ȫ�ֱ��������о�̬������
void other()
{
    static int a = 2;
    static int b;
    //a,bΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���
    //ֻ��һ�ν��뺯��ʱ����ʼ����
    int c = 10; //CΪ�ֲ����������ж�̬������
        //ÿ�ν��뺯��ʱ����ʼ����
    a += 2;
    i += 32;
    c += 5;
    cout << "--OTHER--\n";
    cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
    b = a;
}

int main()
{
    static int a; //��̬�ֲ���������ȫ���������ֲ��ɼ�
    int b = -10;  //b,cΪ�ֲ����������ж�̬������
    int c = 0;
    cout << "---MAIN---\n";
    cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
    c += 8;
    other();
    cout << "---MAIN---\n";
    cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
    i += 10;
    other();
    system("pause");
    return 0;
}