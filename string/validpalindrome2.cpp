#include<iostream>
#include<string>
using namespace std;
bool checkPalindrome(string str,int s,int e){
    while(s<=e){
        if(str[s]!=str[e]){
            return false;
        }else{
            s++;e--;
        }
    }
    return true;
}
bool palindrome(string str){
    int s = 0;
    int e = str.length()-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return checkPalindrome(str,s,e-1) || checkPalindrome(str,s+1,e);
        }else{
            s++;e--;
        }
    }
    return false;
}
int main()
{
    string str = "abc";
    cout<<palindrome(str);
}