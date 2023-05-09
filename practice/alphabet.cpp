#include<iostream>
using namespace std;
int main(){
    string s = "shshs*(s)ss";
    string ans = "";
    string ns = "";
    for(auto it:s){
        if(it >= 'a' && it <= 'z'){
            ans += it;
        }
        else{
            ans += it;
        }
    }
    cout<<ans<<" "<<ns;
}