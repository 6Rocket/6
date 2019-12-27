#include<stdio.h>
int main(void)
{
    unsigned long long int x,y,b,a;
    x=0;
    y=~x;

    a=1;
    b=0;
    while(a!=0)
    {
        a=a<<1;
        b=b+1;
    }
    printf("unsigned long long int is size of %llu bit",b);
    printf("The max is %llu,the min is %llu",y,x);
    return 0;
}#include<stdio.h>
int main(void)
{
    unsigned long long int x,y,b,a;
    x=0;
    y=~x;

    a=1;
    b=0;
    while(a!=0)
    {
        a=a<<1;
        b=b+1;
    }
    printf("unsigned long long int is size of %llu bit",b);
    printf("The max is %llu,the min is %llu",y,x);
    return 0;
}
