#include <stdio.h>
int main()
{
    int i,j,k,n,c=0,n1=4,m1=0,m;
    for(i=5;i>=1;i--)
    {
        m1++;
        printf("%d",i);
        k=i;
        n=i-1;
        for(j=1;j<=(2*n1-1);j++)
        {

            if(c==n)
            {
                k=k-1;
                printf("%d",k);
            }

            else
            {
            k=k+1;
            printf("%d",k);
            c++;
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
          n1--;
          c=0;
    }

    return 0;
}
