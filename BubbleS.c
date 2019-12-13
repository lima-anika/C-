#include <stdio.h>
void a1(int n,int a[10])
{
    int i=0,t1;
    while(i<=8)
    {
        if(a[i]>a[i+1])
        {
            t1=a[i];
            a[i]=a[i+1];
            a[i+1]=t1;
        }

        i++;
    }


    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}

int main()
{
   int a[10]={12,3,2,1,0},n=5,i=0;
   a1(n,a[10]);
return 0;
}
