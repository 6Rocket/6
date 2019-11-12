#include<stdio.h>

int main()
{
    unsigned int a=1 , b=0;
    while (a>0)
    {
        a=a+1;
    }
     printf("最大数：%u\n", a-1);
    unsigned int n=a-1;
    do
    {
        n=n/10;
        b=b+1;
    }
    while(n>0);
    printf("共有%d位\n",b);
    return 0;
}