#include <stdio.h>
#include <stdlib.h>

int main()
{
    int names;
    int *p=&names;
    names=123;
    printf("your chars is:%d",names);
    *p--;
    printf("your second is:%d",*p);
    system("pause");
    return 0;
}