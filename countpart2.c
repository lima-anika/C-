#include <stdio.h>
int main()
{
    int a[10]={3,6,4,1,3,4,1,4},c[10];
    int n=8,j1,j2,j3,j4,j5=n-1,j6=0;
    int b[10]={0,2,2,4,7,7,8};
    for(j5;j5>=0;j5--)
    {


   j2=a[j5];
   j3=b[j2];
   c[j3]=j2;
   b[j2]--;
    }

printf("sorted array:  ");
    for(j6=1;j6<=n;j6++)
    {
      printf("%d  ",c[j6]);
    }
    printf("\n%d ",c[0]);
    return 0;
}
