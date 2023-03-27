#include<iostream>
#include<vector>
using namespace std;

void solve(vector<string>& ans,string digits,int index,string& output,vector<string> m)
{
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int digit = digits[index] - '0';
    string value = m[digit];
    for(int i=0;i<value.length();i++){
        char ch = value[i];
        output.push_back(ch);
        solve(ans,digits,index+1,output,m);
        output.pop_back();
    }
}
int main()
{
    string digits = "23";
    vector<string> ans;
    int index = 0;
    string output = "";
    vector<string> m(10);
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";

    solve(ans,digits,index,output,m);

    for(auto i:ans){
        cout<<i<<" ";
    }
}