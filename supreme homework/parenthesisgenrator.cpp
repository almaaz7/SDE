#include<iostream>
#include<vector>
using namespace std;

void solve(vector<string>& ans,int n,int open,int close, string &output)
{
    if(open == 0 && close == 0){
        ans.push_back(output);
        return;
    }

    if(open > 0)
    {
        output.push_back('(');
        solve(ans,n,open-1,close,output);
        output.pop_back();
    }

    if(close > open)
    {
        output.push_back(')');
        solve(ans,n,open,close-1,output);
        output.pop_back();
    }
}

int main()
{
    int n = 4;
    vector<string> ans;
    string output = "";
    int open = n;
    int close = n;
    solve(ans,n,open,close,output);
    for(auto i:ans){
        cout<<i<<" ";
    }
}