#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cout<<str;
    //cout<<str.length();
    string str2;
    cin>>str2;
    //cout<<str.compare(str2)<<endl;
    int n= str.find(str2);
    string word = "second";
    str.replace(n, 3 , word);
    cout<<str;
}