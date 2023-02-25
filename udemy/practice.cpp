#include<iostream>
using namespace std;

struct ract{
    int length;
    int breath;
};

int main()
{
    struct ract r={10,20};
    struct ract *p;
    p=&r;

    cout<<r.breath<<endl;
    cout<<r.length<<endl;

    



}