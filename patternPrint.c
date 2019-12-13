#include<stdio.h>
int main()
{
    int i,k,n1=4,c=0,m1=0,m,n,j;
    for(i=5;i>=1;i--)
    {
        m1++;
        n=i-1;
        printf("%d",i);
        k=i;
        for(j=0;j<((2*n1)-1);j++)
        {
            if(c==n)
            {
              k=k-1;
                printf("%d",k);
            }
            else
            {

            c++;
            k=k+1;
            printf("%d",k);
            }
        }
        if(i>1)
        {
            printf("%d",i);
        }
    printf("\n");
    for(m=0;m<m1;m++)
    {
        printf(" ");
    }
    c=0;
    n1--;
    }

}
