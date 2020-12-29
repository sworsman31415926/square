#include <stdio.h>
#include <stdlib.h>

int func1(int n)
{
    return 1<<n;
}

int func2(int n)
{

    if(n==0)
    {
        return 1;
    }

    return func2(n-1)*2;
}

int func3(int n)
{
    int c=1, i;
    for(i=0; i<n; i++)
    {
        c*=2;
    }

    return c;
}


int main(void)
{
    int n=10;

    printf("func1计算2的%d次方为:%d\n", n, func1(n));
    printf("func2计算2的%d次方为:%d\n", n, func2(n));
    printf("func3计算2的%d次方为:%d\n", n, func3(n));

    //system("pause");
    return 0;
}