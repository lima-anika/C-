#include<stdio.h>
#define infinity 9999
int dijkstra(int g[20][20],int n,int startnode)
{
    int i,j,cost[20][20],nextnode,distance[10],visited[10],count,mindistance;

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(g[i][j]==0)
        {
            cost[i][j]=infinity;
        }
        else{
            cost[i][j]=g[i][j];
        }
    }

}
for(i=0;i<n;i++)
{
    visited[i]=0;
    distance[i]=cost[startnode][i];

}
visited[startnode]=1;
distance[startnode]=0;
count=1;
while(count<n-1)
{
    mindistance=infinity;
    for(i=0;i<n;i++)
    {
        if(distance[i]<mindistance&&!visited[i])
        {
            nextnode=i;
            mindistance=distance[i];
        }

    }
    visited[nextnode]=1;

    for(i=0;i<n;i++)
    {
        if(!distance[i]&&mindistance+cost[nextnode][i]<distance[i])
        {
            distance[i]=mindistance+cost[nextnode];
        }
    }
    count++;
}
}
int main()
{
    int g[20][20],i,j,n,startnode;
    printf("\nenter N :");
    scanf("%d",&n);
    printf("\nenter StartNode :");
    scanf("%d",&startnode);
    printf("\nenter matrix :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
dijkstra(g[20][20],n,startnode);
    return 0;
}
