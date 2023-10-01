#include<iostream>
#include<vector>
using namespace std;

string solve(vector<string> str){
    string ans = "";
    string first = str[0];
    int i = 0;
    while(i<first.length()){
        char curr_ch = first[i];
        for(auto s : str){
            if(s[i] == curr_ch){
                ans.push_back(s[i]);
            }else{
                break;
            }
        }
        i++;
    }
    return ans;
}

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    string ans = solve(str);
    cout<<ans;
}