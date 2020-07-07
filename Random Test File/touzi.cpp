#include <iostream>
#include <cstdlib>
using namespace std;

enum GameStatus{WIN,LOSE,PLAYING};//枚举类型表示游戏状态
int main()
{
    int sum,myPoint;
    GameStatus status;//定义一个枚举类型值
    unsigned seed;//记录点数种子
    int rollDice();
    cout<<"Please enter an unsinged integer:";
    cin>>seed;
    srand(seed);//给定点数种子，生成随机数
    sum = rollDice();

    switch (sum)
    {
    case 7:
        status = WIN;
        break;
    case 2:
    case 3:
    case 12:
        status = LOSE;
        break;
    default:
        status = PLAYING;
        myPoint = sum;
        cout<<"point is"<<myPoint<<endl;    
        break;
    }
    while (status == PLAYING){
        sum = rollDice();
        if(sum==myPoint)
            status = WIN;
        else if(sum == 7)
            status = LOSE;
    }
    if (status==WIN)
        cout<<"player wins"<<endl;
    else
        cout<<"player loses"<<endl;
    system("pause");
    return 0;
}

int rollDice()
{
    int die1 = 1+rand()%6;
    int die2 = 1+rand()%6;
    int sum = die1 + die2;
    cout<<"player roller"<<die1<<"+"<<
    die2 <<"="<<sum<<endl;
    return sum;
}