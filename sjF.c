#include <stdio.h>
int main()
{
    int s11,s12,s0=0,at1[10],t,s1,c=0,s3,at[10]={8,0,4,5},bt[10]={7,0,1,4},i,j,s,st[10],i1,ct[10],wt[10];
         s=at[0];

     for(i=1;i<4;i++)
        {
            if(at[i]<s)
            {
               s=at[i];
               s1=i;
               c=1;
            }
        }
if(c==1)
{


        t=at[s1];
        at[s1]=at[0];
        at[0]=t;

        t=bt[s1];
        bt[s1]=bt[0];
        bt[0]=t;

}


for(i=1;i<4;i++)
{
    s11=i;

    for(j=i+1;j<4;j++)
    {

if(bt[s11]>bt[j])
{
    t=bt[s11];
    bt[s11]=bt[j];
    bt[j]=t;

    t=at[s11];
    at[s11]=at[j];
    at[j]=t;
}

}

}
for(i=0;i<4;i++)
{
    if(i==0)
    {
        st[i]=0;
    }
    else{
        int r=i;
        r--;
        st[i]=st[r]+bt[r];

        printf("\n st[%d] is %d",i,at[i]);
    }
}

for(i=0;i<4;i++)
{
    wt[i]=st[i]-at[i];
}

         printf("\n Arrival array:");

        for(i=0;i<4;i++)
        {
            printf("\n %d ",at[i]);
        }
         printf("\n ExecutioN array:");

        for(i=0;i<4;i++)
        {
            printf("\n %d ",bt[i]);
        }
         printf("\n burst array:");

        for(i=0;i<4;i++)
        {
            printf("\n %d ",bt[i]);
        }

        printf("\n StarTinG array:");

        for(i=0;i<4;i++)
        {
            printf("\n %d ",st[i]);
        }

                printf("\n WAiting array:");

        for(i=0;i<4;i++)
        {
            printf("\n %d ",wt[i]);
        }


         for(i=0;i<4;i++)
        {
            ct[i]=bt[i]+st[i];
        }

                        printf("\n CompleTIoN array:");

        for(i=0;i<4;i++)
        {
            printf("\n %d ",ct[i]);
        }
}
