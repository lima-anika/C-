#include <stdio.h>
int Bellman_Ford(int g[20][20] , int v, int E, int edge[20][2])
{
int i,u,k,distance[20],parent[20],S,flag=1;

for(i=0;i<v-1;i++)
    {
        for(k=0;k<E;k++)
        {
            u = edge[k][0] , v = edge[k][1] ;
            if(distance[u]+g[u][v] < distance[v])
                distance[v] = distance[u] + g[u][v] , parent[v]=u ;
        }

         printf("\n i VALUE : %d",i);

         printf("\n u: %d",u);
         printf("\n v: %d",v);
    }

}
int main()
{
    int i,j,g[10][10],edge[10][2],v=4,k=0;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf(" \n g[%d][%d] :", i,j);
            scanf("%d",&g[i][j]);
            if(g[i][j]!=0)
            {

                edge[k][0]=i;
                edge[k++][1]=j;


                printf("\n k: %d",k);

                 printf("\n i: %d",i);

                  printf("\n j: %d",j);

            }
        }
    }

    printf("\n%d",k);

    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            //printf("\n %d",g[i][j]);
        }
    }

    Bellman_Ford(g,v,k,edge);
    return 0;
}
