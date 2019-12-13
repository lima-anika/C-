#include <stdio.h>
int st(char s[400])
{
    int sum=0,i=0;
    while(s[i]!='\0')
    {
        if((s[i]>57)||(s[i]<48))
        {
            printf("not Pall");
        }
        else
            sum=sum*10+(s[i]-48);
            i++;
    }
    return sum;
}

int main()
{
    char s[200];
    int valInt;
    scanf("%s",s);
    valInt=st(s);
    printf("%d",valInt);
    return 0;
}
