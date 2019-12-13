#include<stdio.h>
int main()
{
    char s[50],rev[60];
    int i,j,len=0,flag=1;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
        rev[len-i-1]=s[i];
    }
    for(i=0;i<len;i++)
    {
        if(rev[i]!=s[i])
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("pallindrome");
    }
    else
         printf("Not pallindrome");
}
