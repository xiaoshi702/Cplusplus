#include <iostream>
using namespace std;
class Fred;//前向引用声明
class Barney{
    //Fred x-->错误：类Fred的声明尚不完善
};
class Fred{
    Barney y;
};
