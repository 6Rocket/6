#include<stdio.h>
char func(char n)
{
    char count=0;
    while(n>0)
    {
      count++;
      n&=(n-1);
    }
return count;
}
int main(void)
{
    printf("输入整数");
    char n;
    n=getchar();
    char num=func(n);
    printf("the number of one is %d\n",num);
    putchar(num);
}