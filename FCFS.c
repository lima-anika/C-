#include <stdio.h>
int main()
{
    int at[10],tt[10],wt[10],ct[10],bt[10],st[10],i,j,k,l,m,n,s=0;
     printf("\n enter no of process:");
     scanf("%d",&n);
    printf("\n enter arrival Time:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }
        printf("\n enter Burst Time:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            st[i]=0;
        }
        else
        {
            for(j=0;j<i;j++)
            {
            s=s+bt[j];
            st[i]=s;
        }
        s=0;
    }
}

printf("\n starting Time:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",st[i]);
    }

    for(i=0;i<n;i++)
    {
        wt[i]=st[i]-at[i];
    }

   printf("\n Waiting Time:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",wt[i]);
    }

    for(i=0;i<n;i++)
    {
        ct[i]=st[i]+bt[i];
    }
     printf("\n Completion Time:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",ct[i]);
    }

        for(i=0;i<n;i++)
    {
        tt[i]=wt[i]+bt[i];
    }

     printf("\n turn around time Time:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",tt[i]);
    }
}
