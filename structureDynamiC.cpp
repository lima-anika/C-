//dynamically allocate Array
#include<iostream>
using namespace std;
int *arr;//pointer arrray
int size,i;
int main()
{
    cin>>size;
    arr=new int [size];
    for(i=0;i<size;i++)
    {
        cin>>*(arr+i);
    }
    for(i=0;i<size;i++)
    {
        cout<<endl<<*(arr+i);
    }
return 0;
}
