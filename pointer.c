#include<stdio.h>
int main()
{
    int *p1,*p2,v1,v2;
    v1=60,v2=40;
    p1=&v1;
    p2=&v2;
    p1=p2;
    printf("\n address : %d  %d",p1,p2);
    printf("\n value:  %d  %d",*p1,*p2);
    printf("\n %d  %d",v1,v2);
}
