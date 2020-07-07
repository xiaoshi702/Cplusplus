#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
    int s;
    unsigned seed;
    cout<<"Input your random seed:";
    cin>>seed;
    int rollDice();
    srand(seed);
    for(i=1;i<=20;i++)
    {
        cout<<"this is"<<i<<"numbers";
        s = rollDice();
        cout<<"randomcount is:"<<s<<endl;
    }
    system("pause");
    return 0;
}

int rollDice()
{
    int die1 = rand();
    int sum = die1;
    return sum;
}