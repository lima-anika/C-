#include <stdio.h>
int main()
{
    int arr[100]={12,1,4,2,7,9,0};
    int i,i1=6,i2,i3=0,i4,i5,c=0,c1;
    for(i=0;i<i1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            i2=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=i2;
        }
        printf("\n %d %d ",arr[i],arr[i+1]);
        for(i5=0;i5<i1;i5++)
        {
            if(arr[i5]<arr[i5+1])
            {
                c++;
            }
            if(c==6)
            {
                break;
            }
            else{
                c=0;
            }
        }
        if(c==6)
        {
            break;
        }
    }

    for(i4=0;i4<i1;i4++)
    {
        printf("\n%d  ",arr[i4]);
    }
}
