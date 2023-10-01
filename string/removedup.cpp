#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "azxxzy";
    string ans = "";
    for(int i=0;i<str.length();i++){
        if(ans[ans.length()-1]==str[i]){
            ans.pop_back();
        }else{
            ans.push_back(str[i]);
        }
    }
    cout<<ans;
}