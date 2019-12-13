#include <stdio.h>
void heap(int a[7],int n)
{
    int l,r,i=1,t1,k=1,c=0;
    while(1)
    {
            l=2*i;
    r=l+1;
    if(a[i]<a[l]&&a[l]<100)
     {
         t1=a[i];
         a[i]=a[l];
         a[l]=t1;
     }
     if(a[i]<a[r] && a[r]<100)
     {
         t1=a[i];
         a[i]=a[r];
         a[r]=t1;
     }
     do{
        if((a[k]>a[2*k])&&(a[k]>a[(2*k)+1]))
        {
            c++;
        }
        k++;
     }while(c<=n/2);
     if(c==n/2)
     {
         break;
     }
    }
    for(i=1;i<=5;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[7]={12,4,3,1,66};
   int n=5;
    heap(a[7],n);

    return 0;
}
