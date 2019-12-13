#include <stdio.h>
int main()
{
    int a[10]={1,90,37,57,6};
    int i=0,s1=0,k=0,s=0;
    while(i<=4)
    {
        if(i!=4)
        {

        if(a[i+1]<a[i])
        {
            s1=a[i+1];
            a[i+1]=a[i];
            a[i]=s1;
        }
        }
        printf("\n%d   ",i);
        printf("\n%d   %d ",a[i],a[i+1]);
        s=i;
        if(i>=1)
        {       printf( "\nWelcome to C!\n" );

        k=s-1;
        }
        while(k>=0)
        {
            if(a[s]<a[k])
            {
            s1=a[s];
            a[s]=a[k];
            a[k]=s1;
            }
            s=k;
printf("\n %d   %d ",a[k],a[s]);
            k--;

        }
        i++;
    }
 printf( "\nSorted!\n" );

    for(i=0;i<5;i++)
    {
        printf(" %d   ",a[i]);
    }
}
