#include <stdio.h>
int main()
{ int i=0,s1=0,s2=0,s3=0,s4=0,j=0;
 int a[10]={12,24,2,32,10,3};

    while(i<6)
    {
        s2=i;
        if(a[i+1]<a[i])
        {
            s1=a[i+1];
            a[i+1]=a[i];
            a[i]=s1;
        }
        if(i>=1)
            s3=s2-1;
        {
          while(s3>=0)
          {

              if(a[s2]<a[s3])
              {
                  s4=a[s2];
            a[s2]=a[s3];
            a[s3]=s4;
              }
            s3--;
          }
        }
        i++;
    }


    for(j=0;j<6;j++)
    {
        printf("%d  ",a[j]);
    }
}
