#include <iostream>
using namespace std;

int sumOfSquare(int x,int y){
    return x*x + y*y;
}

float sumOfSquare(float x,float y){
    return x*x + y*y;
}

int sumOfSquare(int x,int y,int z){
    return x*x + y*y + z*z;
}

int main()
{
    int a,b,z;
    cout<<"Please enter your int numbers:";
    cin>>a>>b>>z;
    cout<<"Your count is"<<sumOfSquare(a,b)<<endl;
    cout<<"Please enter your float numbers:";
    float t,r;
    cin>>t>>r;
    cout<<"Your count is"<<sumOfSquare(t,r)<<endl;
    cout<<"three numbers count is:"<<sumOfSquare(a,b,z)<<endl;
    system("pause");
    return 0;
}