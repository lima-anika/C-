#include <stdio.h>
int main()
{
    char s[100],revs[200];
    int i,flag=1,len=0;
    printf("enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }

     printf("\n len %d",len);

     for(i=len-1;i>=0;i--)
     {
         revs[len-i-1]=s[i];
     }
     for(i=0;i<len;i++)
     {
         if(s[i]!=revs[i])
         {
             flag=0;
         }
     }
     if(flag==0)
     {

     printf("\n string %s is not pallindrome",s);
     }
     else
      printf("\n string %s is  pallindrome",s);
}
