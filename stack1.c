#include<stdio.h>

int main()
{
    int max=5;
int a[max],top=0,choice,exit=1,item,to=0;
do{

printf("\n  enter 1 for PusH:  \n  enter 2 for poP: ");
scanf("%d",&choice);
    switch(choice)
    {
    case 1:

        if(top==max)
        {
           printf("\n  Stack is Full!!!!!!!!!");

        }

        else
            {
       scanf("%d",&item);
       a[top++]=item;}

       break;

    case 2:

        if(to==5)
        {
         printf("\n Queue is Empty");
        }
        else
        {

        printf("\n Popped value: %d", a[to]);
        printf(" \n position: %d",to);
        to++;
        }
        break;

            default:
        exit=0;
        break;
    }


}while(exit);
    return 0;
}
