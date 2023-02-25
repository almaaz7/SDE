#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "abcdef";
    for(int i=0;i<s.length()-1;i++){
        cout<<s[i]<<endl;
    }
    cout<<s.length();
}
// int main()
// {
//     string s = "aadfjjdaagdfcvvvsdaaaa";
//     int freq[26];
//     for(int i=0;i<26;i++){
//         freq[i] = 0;
//     }
//     for(int i=0;i<s.size();i++){
//         freq[s[i]-'a']++;
//     }
//     char ans = 'a';
//     int maxf = 0;
//     for(int i=0;i<26;i++){
//         if(freq[i] > maxf){
//             maxf = freq[i];
//             ans = i + 'a';
//         }
//     }

//     cout<<maxf<<" "<<ans<<endl;
// }