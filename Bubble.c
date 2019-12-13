#include <stdio.h>
int main()
{
    int i=0,s=0,t1,n=7,a[10]={12,4,5,2,1,3,0};
    while(1)
    { s++;
        if(a[i]>a[i+1])
        {
             t1=a[i];
            a[i]=a[i+1];
            a[i+1]=t1;
        }
        i++;
        if(i==6)
        {
            i=0;
        }
        if(s==(n*n))
        {
            break;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
