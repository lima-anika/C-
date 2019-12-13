#include<iostream>
using namespace std;
int main()
{
    struct lima
    {
        char nature[20];
        int roll;
    };
    lima l1;
    cin>>l1.nature;
    cin>>l1.roll;
    cout<<l1.nature<<l1.roll<<endl;
    struct lima l2={"gadha",10};
    cout<<endl<<l2.nature<<" "<<l2.roll;
}
