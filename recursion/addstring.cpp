#include<iostream>
#include<algorithm>
using namespace std;

string addstring(string a,string b,int carry,int i,int j,string& ans){

    if(i<0 && j<0 && carry == 0){
        return "";
    }

    int first = 0;
    int second = 0;

    if(i>=0){
        first = a[i]-48;
    }
    if(j>=0){
        second = b[j]-48;
    }

    int sum = first + second + carry;
    int lastdigit = sum % 10;
    carry = sum / 10;

    ans.push_back(lastdigit + 48);

    addstring(a,b,carry,i-1,j-1,ans);
    return ans;
}

int main(){
    string a = "11";
    string b = "123";
    string ans = "";

    ans = addstring(a,b,0,a.length()-1,b.length()-1,ans);
    reverse(ans.begin(),ans.end());
    cout<<ans;
}