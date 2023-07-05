#include<iostream>
#include<vector>
using namespace std;

int topDown(int n,vector<int> &dp){
    if(n==1 || n==0){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = topDown(n-1,dp)+topDown(n-2,dp);
    return dp[n];
}

int main()
{
    int n;
    n = 9;
    vector<int> dp(n+1,-1);
    int ans = topDown(n,dp);
    cout<<ans;
}