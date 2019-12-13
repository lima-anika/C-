#include<stdio.h>
int f(char s[])
{
int sum=0,i=0;

    while(s[i]!='\0')
    {
        if(s[i]<48 || s[i]>57)
        {
            printf("not possible");
            break;
        }
        else
        {
            sum=(sum*10+s[i]-48);
            i++;
        }
    }
    return sum;
}
int main()
{
    int intval;
    char s[90];
    gets(s);
    intval=f(s);
printf("%d",intval);
}
