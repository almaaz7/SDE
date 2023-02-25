#include<iostream>
using namespace std;
int nstair(int n)
{
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans = nstair(n-1)+nstair(n-2);
    return ans;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    cout<< nstair(n)<<endl;
    }
}