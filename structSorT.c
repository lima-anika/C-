#include<stdio.h>
struct per
{
    char s[30];
    int age;
};
int main()
{
    struct per s[40],temp;
    int age,i,j;
    for(i=0;i<3;i++)
    {
        scanf("%s %d",s[i].s,&s[i].age);
    }
    for(i=0;i<3-1;i++)
    {
        for(j=0;j<3-1;j++)
        {
            if(s[j].age>s[j+1].age)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("\n %s %d",s[i].s,s[i].age);
    }
}
