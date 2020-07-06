#include <iostream>
#include "client.h"
using namespace std;

int CLIENT::ClientNum=0;
char CLIENT::ServerName='a';

int main()
{
    CLIENT c1;
    c1.ChangeServerName('a');
    cout<<c1.getClientNum()<<endl;
    CLIENT c2;
    c2.ChangeServerName('b');
    cout<<c2.getClientNum()<<endl;
    system("pause");
    return 0;
}
