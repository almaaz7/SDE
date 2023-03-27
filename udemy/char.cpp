#include<iostream>
#include<string>
using namespace std;

//count of words
int main()
{
    string str = "how are    you";
    int count=1;
    for(int i=0;i<str.length();i++){
        if(str[i]==' ' && str[i-1]!=' '){
            count++;
        }
    }
    cout<<str.length();
    cout<<count;
}
// int main()
// {
//     string str = "AlMaAz";
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             str[i]+=32;
//         }else if(str[i]>='a' && str[i]<='z'){
//             str[i]-=32;
//         }
//     }
//     cout<<str;
// }