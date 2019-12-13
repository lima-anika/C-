# include <stdio.h>
int main()
{
    int i,c=0,b=5,s,a=0;
    level1:
    for(i=0;i<2;i++)
    {

         printf("\n in for Loop");
        if(c==0)
        {
            goto level;
        }

        printf("\n i : %d",i);

goto level2
    }

    level:

        s=a+b;
         printf("\n SummatIoN :");
        printf("\n %d",s);

goto level1;
level2:
    return 0;

}
