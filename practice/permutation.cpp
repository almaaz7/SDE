#include<iostream>
using namespace std;
void solve(string& str, int l,int h)
{
    if(l==h){
        cout<<str<<" ";
    }

    for(int i=l;i<str.length();i++)
    {
        swap(str[l],str[i]);
        solve(str,l+1,h);
        swap(str[l],str[i]);
    }
}
int main()
{
    string str = "abcd";
    int l = 0;
    int h = str.length();
    solve(str,l,h);
}