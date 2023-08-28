#include<iostream>
#include<vector>
using namespace std;

vector<string> solve(string str,string ans,int index,vector<string>& seq){
    if(index == str.length()){
        seq.push_back(ans);
        return seq;
    }

    solve(str,ans+str[index],index+1,seq);
    solve(str,ans,index+1,seq);
    return seq;
}

int main(){
    string str = "abc";
    string ans = "";
    vector<string> seq;
    solve(str,ans,0,seq);
    for(auto i:seq){
        cout<<i<<" ";
    }
}