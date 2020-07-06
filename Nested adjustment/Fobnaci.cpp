#include <iostream>
using namespace std;

unsigned Fobnaci(unsigned m)
{
    unsigned f;
    if(m==0)
        return f = 1;
    else
    {
        return f = Fobnaci(m-1)*m;
    }
}

int main()
{
    unsigned m;
    cout<<"Please enter your numbers:";
    cin>>m;
    unsigned y = Fobnaci(m);
    cout << m << "!=" << y << endl;
    system("pause");
    return 0;
}