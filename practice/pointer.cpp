#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int* solve()
// {
//     int a = 5;
//     cout<<&a<<endl;
//     int* ans = &a;
//     cout<<&ans<<endl;
//     return ans;
// }
// void solve(int **ptr)
// {
//     ptr = ptr + 1;
// }
int main()
{
    vector<int> arr = {30,24,14,8};
    cout<<*max_element(arr.begin(),arr.end());
    // int arr[] = {4,5,6,7};
    // cout<<*arr + 9;

    // float f = 10.5;
    // float p = 2.5;
    // float* ptr = &f;
    // *ptr = p;
    // cout<<*ptr;
    
    // int x= 12;
    // int *p = &x;
    // int **q = &p;
    // cout<<"value before : "<<x<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;
    // cout<<q<<endl;
    // solve(q);
    // cout<<"value after : "<<x<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;
    // cout<<q<<endl;
}