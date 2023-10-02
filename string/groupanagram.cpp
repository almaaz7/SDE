#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

std::array<int,256> has(string s){
    std::array<int,256> hash = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    return hash;
}
vector<vector<string>> groupAnagram(vector<string> str){
    map<std::array<int,256>,vector<string>> mp;

    for(auto i:str){
        mp[has(i)].push_back(i);
    }

    vector<vector<string>> ans;

    for(auto it=mp.begin();it!= mp.end();it++){
        ans.push_back(it->second);
    }
    return ans;
}

// vector<vector<string>> groupanagram(vector<string> str){
//     map<string,vector<string>> mp;

//     for(auto i:str){
//         string s = i;
//         sort(s.begin(),s.end());
//         mp[s].push_back(i);
//     }

//     vector<vector<string>> ans;
//     for(auto it=mp.begin();it!=mp.end();it++){
//         ans.push_back(it->second);
//     }
//     return ans;
// }

int main()
{
    vector<string> str = {"eat","tea","tan","ate","nat","bat"};
    // vector<vector<string>> ans = groupanagram(str);
    vector<vector<string>> ans = groupAnagram(str);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
    }
}