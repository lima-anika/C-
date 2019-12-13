#include <stdio.h>
#include <conio.h>
#include <math.h>
int largest(void)
{
    int x,j=1,i,r2,a[10];
    for(i=1;i<=6;i++)
    {
        scanf(" \n %d",&a[i]);
    }
    x=a[1];
    printf(" \n %d ",x);
    for(j=2;j<=6;j++)
    {
    if(a[j]>x)
    {
        x=a[j];
    }
    }
    return x;
}
int main()
{
    int a[10];
    int i=1,n,r1,t1,l,r;
n=6;
    for(i=1;i<=6;i++)
    {
        scanf(" \n %d",&a[i]);
    }

i=1;
r1=largest();
printf(" \n largest Value %d",r1);

    while(a[1]!=r1)
    {
     l=i*2;
     r=l+1;
     printf("\n left & right child %d %d",l,r);
     if(a[i]<a[l])
     {
         t1=a[i];
         a[i]=a[l];
         a[l]=t1;
     }
     printf("\n after lesft swap %d %d",a[l],a[i]);
     if(a[r]<100)
     {

     if(a[i]<a[r])
     {
         t1=a[i];
         a[i]=a[r];
         a[r]=t1;
     }
     printf("\n after right swap %d %d",a[r],a[i]);
     }
        i++;
    }
printf("\n%d",a[1]);
    return 0;
}
