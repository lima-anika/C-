#include<stdio.h>
int fun()
{
    int a;
    scanf("%d",&a);
    return a;
}
int main()
{
    int c,d;
    c=fun();
    d=fun();
    int s;
    printf("%d",c+d);

}
