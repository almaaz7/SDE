#include<iostream>
#include<vector>
using namespace std;
void solve(vector<char> ans,string output,int n)
{
    
}
int main()
{
    int n = 4;
    string output = "";
    vector<char> ans;
    solve(ans,output,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}