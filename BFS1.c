#include<stdio.h>
int q[50],a[20][20],visited[20],i,j,k,s,n,f=0,r=-1;
void bfs(int v) {

    printf("\nstarting vertex:");
    printf("%d",v);

 for(i = 1; i <= n; i++)
    printf("\nStarting  vertices:");
    printf("%d",v);
 printf("\nloop e i r value:");
 printf("\n%d",i);

 printf("\nnot visited i r value:");
 printf("\n%d",!visited[i]);

 if(a[v][i] && !visited[i])

 q[++r] = i;

 printf("\n q[++r] r value:");
  printf("\n%d",i);

 printf("\nf r value:");
  printf("\n%d",f);

  printf("\nr er value niche f & r r comparison hoi f<=r:");
   printf("\n%d",r);

 if(f <= r) {
         printf("\n%d",q[f]);
 visited[q[f]] = 1;

 bfs(q[f++]);

 }
}
int main()
{
    printf("\nenter no. of  vertices:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        q[i]=0;
        visited[i]=0;
    }
    printf("\nenter starting vertex:");
scanf("%d",&s);
bfs(s);
}
