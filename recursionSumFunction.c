#include<iostream>
using namespace std;
int v,s=0;
void f(int v)
{
    if(v>0)
    {

    s=s+v;
    f(v-1);
    }
    return s;
}
int main()
{
    v=9;
    s=f(v);
    return 0;
}
