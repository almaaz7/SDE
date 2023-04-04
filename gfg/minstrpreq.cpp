#include<iostream>
using namespace std;
int main()
{
    string str = "aababaa";
    int a = 0;
    int b = 0;

    if(str[0]=='a'){
        a++;
    }
    else{
        b++;
    }
    for(int i=1;i<str.size();i++){
        if(str[i-1]=='a' && str[i]=='b'){
            b++;
        }
        if(str[i-1]=='b' && str[i]=='a'){
            a++;
        }
    }
    cout<<min(a,b)+1;

}