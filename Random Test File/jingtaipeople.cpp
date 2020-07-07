#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Point
{
public:
    Point(int x = 0, int y = 0) : x(x), y(y)
    { //构造函数
        count++;
    }
    Point(Point&p)//复制构造函数
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
    static int count;//静态数据成员声明，用于记录点的个数
};

int Point::count = 0;//静态成员的定义和初始化，要在类体外，使用类名限定

int mian()
{
    Point a(4, 5);
    cout << "Point A:" << a.getX() << "," << a.getY();
    a.showCount();

    Point b(a);//复制构造函数
    cout << "Point B:" << b.getX() << "," << b.getY();
    b.showCount();
    system("pause");
    return 0;
}

