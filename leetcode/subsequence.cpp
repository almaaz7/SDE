#include<iostream>
using namespace std;
bool issubsequence(string s,string t)
{
    int count = 0;
    for(int i=0;i<s.length();i++)
    {
        for(int j = 0;j<t.length();j++){
            if(t[j]==s[i]){
                count++;
                j=i;
            }
        }
    }
    if(count == s.length()){
        return 1;
    }
    else return 0;
}
int main()
{
    string s = "acb";
    string t = "ahbgdc";
    cout<<issubsequence(s,t);
}