#include<iostream>
#include<stack>
using namespace std;
    string solve(string s) {
        stack<char> st;
        for(auto it:s){
            if(it == '*'){
                st.pop();
            }
            else{
                st.push(it);
            }
        } 
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;  
    }
int main(){
    string s = "leet**cod*e";
    string ans = solve(s);
    cout<<ans;
}