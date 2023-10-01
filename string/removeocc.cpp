#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";
    string ans = "";
    while(str.find(part) && str.find(part) != std::string::npos){
        int index = str.find(part);
        str.erase(index,part.length());
    }
    cout<<str;
}