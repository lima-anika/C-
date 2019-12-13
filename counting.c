#include <stdio.h>
int main()
{
    int a[100],n,k=0,i,c=0;
    printf("input n:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    while(1)
    {
        if(a[k]==i)
        {
            c++;
            printf("\n%d",c);
        }
        k++;

        printf("\n%d",c);
        if(k>=6)
        {
            a[i]=c;
            printf("\n%d",c);
            c=0;
            k=0;
            break;
        }

    }
}
 printf("\n array ");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}
