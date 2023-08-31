#include<iostream>
#include<string>
using namespace std;
void solve(string str,char target,int n,int& ans){
    if(n>=str.length()){
        return;
    }
    if(str[n]==target){
        ans = n;
    }
    solve(str,target,n+1,ans);
    
    
}

int main()
{
    string str = "abcddedg";
    char target = 'd';
    int n = 0;
    int ans = -1;
    solve(str,target,n,ans);
    cout<<ans+1;
    
}