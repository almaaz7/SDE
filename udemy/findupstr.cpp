#include<iostream>
#include<string>
#include<vector>
using namespace std;
//using bit masking and bit merging
int main()
{
    string str = "finding";
    int h=0;
    for(int i=0;i<str.length();i++){
        int x = 1;
        x=x<<(str[i]-97);
        if((x&h)>0){
            cout<<str[i]<<endl;
        }else{
            h=x|h;
        }
    }
}

// int main()
// {

//     string str = "finding";
//     vector<int> h(26,0);
//     for(int i=0;str[i]!='\0';i++){
//         h[str[i]-97]++;
//     }
//     for(int i=0;i<h.size();i++){
//         if(h[i]>1){
//             cout<<char(i+97)<<" occured "<<h[i]<<endl;
//         }
//     }
// }