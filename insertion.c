#include <stdio.h>
int main()
{
    int a[10]={12,24,2,32,10,3};

    int s1=0,s2,i,c=0,d,s3,j;

    for(i=0;i<6;i++)
    {
       if(a[i+1]<a[i])
       {
           s1=a[i+1];
           a[i+1]=a[i];
           a[i]=s1;
           d=c++;
       }
       s2=i+1;
       for(j=0;j<c;j++)
       {

           if(a[c]<a[j])
           {
                s3=a[c];
           a[c]=a[j];
           a[j]=s3;
           }
           c--;
       }
       c=d;

    }

    for(i=0;i<6;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
