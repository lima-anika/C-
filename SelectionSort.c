#include <stdio.h>
int main()
{
    int n=6,a[10]={12,7,10,15,2,23},i=0,j,k,l,m;
    while(i<n)
    {
        j=a[i];
        for(k=i+1;k<n;k++)
        {
            if(j>a[k])
            {
                a[i]=a[k];
                a[k]=j;
                j=a[i];
            }
        }
        i++;
    }
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}
