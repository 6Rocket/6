#include<stdio.h>
int main()
#define MAXLINE 50
{
    int p=0;
    int q=0;
    char s[MAXLINE];
    int c=0;
    while((s[c]=getchar())!=EOF)
    {
        if(s[c]=='\n')
        {
            break;
        }
        c++;
    }
    for(c=0;s[c]!='\n';c++)
    {
        if(s[c]=='a'||s[c]=='A')
           p++;
    }
    for(c=0;s[c]!='\n';c++)
    {
        if(s[c]=='0')
        {
           q++;
        }
    }
    printf("the number of a is :%d\n",p);
    printf("the number of 0 is :%d\n",q);

}
