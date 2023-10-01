#include<iostream>
using namespace std;

string reorganizeString(string s){
    int hash[26] = {0};

    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int max_freq = INT_MIN;
    char max_freq_char;

    for(int i=0;i<26;i++){
        if(hash[i]>max_freq){
            max_freq = hash[i];
            max_freq_char = i+'a';
        }
    }
    int index = 0;
    while(max_freq > 0 && index < s.size()){
        s[index] = max_freq_char;
        max_freq--;
        index = index + 2;
    }

    if(max_freq > 0){
        return "null";
    }

    for(int i=0;i<26;i++){
        while(hash[i]>0){
            index = index<=s.size() ? 1:index;
            s[i] = i + 'a';
            hash[i]--;
            index = index + 2;
        }
    }

    return s;
}

int main(){
    string s;
    cin>>s;
    string ans = reorganizeString(s);
    cout<<ans;
}