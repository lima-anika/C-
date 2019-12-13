#include<iostream>
using namespace std;
int main()
{
    int a[20]={2,5,4,6,1},i,j;
    int *p;
    p=&a[0];
    for(i=0;i<5;i++)
    {
        cout<<*(p+i);
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
        cout<<" "<<p+i;
    }
}
