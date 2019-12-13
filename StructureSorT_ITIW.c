#include <stdio.h>
struct info
{
    char name[20];
    int age;
};
int main()
{
    struct info st[30],temp;
    int i,j,n=4;
    for(i=0;i<n;i++)
    {
        scanf("%s %d",st[i].name,&st[i].age);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(st[j].age>st[j+1].age)
            {
                temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n %s %d",st[i].name,st[i].age);
    }
}
