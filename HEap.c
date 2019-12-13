#include <stdio.h>
void heap(int a[10],int n)
{
    int i=1,j=1,l,r,t1,k,k2=6;
    n=n/2;
while(1)
{
    l=2*i;
    r=l+1;
    if(a[i]<a[l]&&a[l]<100)
     {
         t1=a[i];
         a[i]=a[l];
         a[l]=t1;
     }
     if(a[i]<a[r] && a[r]<100)
     {
         t1=a[i];
         a[i]=a[r];
         a[r]=t1;
     }
     while(1)
     {
      if(a[j]<a[l]||a[j]<a[r])
      {
          heap(a[10],n);
      }
      j++;
      if(j>n)
      {
          k=1;
          printf("%d ",a[k]);
          k2--;
          if(k2==1)
          {
              break;
          }
           t1=a[k];
         a[k]=a[n];
         a[n]=t1;
         heap(a[10],n-1);
      }
     }

   if(k2==1)
   {
       break;
   }
   i++;
}
}
int main()
{ int a[10],n=6;
int i;
for(i=1;i<=6;i++)
{
    scanf("%d",&a[i]);
}
    heap(a[10],n);
    return 0;
}
