//shortest remaining time First
int main()
{
    int at[10]={0,2,4,5,3},bt[10]={7,4,1,4,5},i,j,cpu[10],t;
    int s,nonsjf[10],execution[10];
    s=at[0];
    for(i=0;i<5;i++)
    {
        s=i;
        for(j=0;j<5;j++)
        {
        if(at[i]<at[j])
        {
            t=at[i];
            at[i]=at[j];
            at[j]=t;

            t=bt[i];
            bt[i]=bt[j];
            bt[j]=t;
        }
        }
    }

    for(i=0;i<5;i++)
    {
        printf("\n A.t. : %d ",at[i]);
    }

    for(i=0;i<5;i++)
    {
        printf(" \n B.T :  %d",bt[i]);
    }

    return 0;
}
