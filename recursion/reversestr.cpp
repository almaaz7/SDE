#include<iostream>
using namespace std;

void solveByTail(string str,int index,string& ans){
    if(index > str.length()){
        return;
    }
    solve(str,index+1,ans);
    ans.push_back(str[index]);
}

void solverec(string& str, int i,int j){
    if(i>=j){
        return;
    }
    swap(str[i],str[j]);
    solverec(str,i+1,j-1);
}

int main(){
    string str= "almaaz";
    string ans;
    solveByTail(str,0,ans);
    cout<<ans;
}