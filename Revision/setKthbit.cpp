#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int k =1 ;
    int val = 1<<k;
    int ans = n | val;
    cout<<ans;
}