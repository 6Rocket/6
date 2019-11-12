#include<stdio.h>

int cout_one_bits(unsigned int value)
{
    int cout = 0;
    while(value)
    {
        value = value & (value - 1);
        cout++;
    }
    return cout;
}

int main()
{
    int nums[10];
    unsigned int num=0, i=0;
    printf("%d",2);

    while((nums[i]=getchar()) && nums[i] != '\n')
    {
        num = num * 10 + nums[i] - '0';
    }
    printf("%d",cout_one_bits(num));
    return 0;
}