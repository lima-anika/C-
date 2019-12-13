#include <stdio.h>
void heap(int heap[10],int n)
{
    int a,b=1,c,d,e;
    for(a=n/2;a>=1;a--)
    {
        printf("\n%d",a);
        c=a*2;
        d=c+1;
                printf("\n left right %d %d ",c,d);

        if((c<=n)&&(d<=n))
        {
            printf("\n comparison  ");
            if(heap[d]>heap[c])
            {
                printf("\n left right %d %d ",heap[d],heap[c]);
                if(heap[a]<heap[d])
                {
                   e=heap[a];
                   heap[a]=heap[d];
                   heap[d]=e;

                   printf("\n exch right %d %d ",heap[a],heap[d]);
                }
            }
            else
            {
                   e=heap[a];
                   heap[a]=heap[c];
                   heap[c]=e;
                   printf("\n exch left %d %d ",heap[a],heap[c]);
            }
        }
            }
}
int main()
{
    int hep[10],i,j,k,i1,j1,k1,n;
    printf("enter elements:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&hep[i]);
    }
    heap(hep[10],n);
}
