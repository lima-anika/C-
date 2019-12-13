#include <stdio.h>
struct stu
{
    int age;
    char name[100];
};

int main()
{
    struct stu s[100],temp;
    int i,j,n;
    for(i=0;i<3;i++)
    {
        scanf("%s %d",s[i].name,&s[i].age);
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
        printf(" \n %s %d",s[i].name,s[i].age);
    }
}
