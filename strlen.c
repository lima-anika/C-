#include <stdio.h>
int main()
{
    int i;
    char s[1000];
    printf("enter string :");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++);
    printf("length is %d",i);

}
