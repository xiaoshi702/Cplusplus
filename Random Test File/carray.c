#include <stdio.h>
#include <stdlib.h>

int Faconiba(int x)
{  
    if(x == 1 || x == 2)
        return 1;
    else
        return Faconiba(x-1) + Faconiba(x-2);
}

int main()
{
    printf("Your number is %d\n",Faconiba(45));    
    system("pause");
    return 0;
}