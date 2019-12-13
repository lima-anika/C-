#include <stdio.h>
int main()
{
    int n,i,j,k,a[10],b[10],c=0,j1,j2,j3,j4,j5,j6;
    printf("n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        k=i;
        for(j=0;j<n;j++)
        {
            if(a[j]==k)
            {
                c++;
            }
        }
        printf("%d ",c);
        c=0;
    }

    for(i=0;i<n;i++)
    {
        a[i]=a[i+1]+a[i];
    }

for(i=n-1;i>=0;i--)
{
    j=b[i];//4
    j1=b[j];// 4 no index : 7
    b[j1]=j;
    b[j]--;
}
    return 0;
}
