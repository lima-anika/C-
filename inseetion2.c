#include <stdio.h>
int main()
{
    int a[10]={12,24,2,32,10,3};
    int b[10];
    int j=0,k=0,i,s1,s2;
    for(i=0;i<6;i++)
    {
        if(a[i+1]<a[i])
        {
            s1=a[i];
            a[i]=a[i+1];
            a[i+1]=a[i];
        }
        b[j]=a[i];
        b[j+1]=a[i+1];
        j++;
        s2=j++;
        k=j-1;
        while(k>=0)
        {
            if(b[s2]<b[k])
            {
                s1=b[s2];
                b[s2]=b[k];
                b[k]=s1;
            }
            k--;
        }
    }
    for(i=0;i<6;i++)
    {
        printf("%d  ",b[i]);
    }

}
