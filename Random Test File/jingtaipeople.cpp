#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Point
{
public:
    Point(int x = 0, int y = 0) : x(x), y(y)
    { //���캯��
        count++;
    }
    Point(Point&p)//���ƹ��캯��
    {
        x = p.x;
        y = p.y;
        count++;
    }
    ~Point() { count--; }
    int getX() const { return x; }
    int getY() const { return y; }
    void showCount() const
    {
        cout << "Object count=" << count << endl;
    }

private:
    int x, y;
    static int count;//��̬���ݳ�Ա���������ڼ�¼��ĸ���
};

int Point::count = 0;//��̬��Ա�Ķ���ͳ�ʼ����Ҫ�������⣬ʹ�������޶�

int mian()
{
    Point a(4, 5);
    cout << "Point A:" << a.getX() << "," << a.getY();
    a.showCount();

    Point b(a);//���ƹ��캯��
    cout << "Point B:" << b.getX() << "," << b.getY();
    b.showCount();
    system("pause");
    return 0;
}

