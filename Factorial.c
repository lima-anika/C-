#include <stdio.h>
int f(int a)
{
    printf("\n %d",a);
    if(a>=1)
    {
        printf("\n here");
        return a*f(a-1);
    }
    else
        return 1;
}
int main()
{
    int a,a1;
    scanf("%d",&a);
    a1=f(a);
    printf(" \n Factorial is %d",a1);
}
