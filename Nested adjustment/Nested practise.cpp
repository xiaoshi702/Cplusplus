#include <iostream>
using namespace std;

unsigned fac(int n,int k)
{
    if(n==k|k==0)
    return 1;
    else if(k>n)
    return 0;
    else{
        return fac(n-1,k) + fac(n-1,k-1);
    }
}


int main()
{
    int n,k;
    cout<<"Please enter your n and k:";
    cin>>n>>k;
    cout<<"F(n,k)="<<fac(n,k)<<endl;
    system("pause");
    return 0;
}