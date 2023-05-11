#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//o(n)
void nextSmaller(vector<int> &arr,stack<int> &s,vector<int> &ans){
    for(int i = (arr.size()-1);i>=0;i--){
        int curr = arr[i];
        while (s.top()>=curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
        
    }
    // for(int i = arr.size()-1;i>=0;i--){
    //     int curr = arr[i];
    //     if(s.top()<curr){
    //         ans[i] = s.top();
    //         s.push(curr);
    //     }
    //     else{
    //         while(s.top()>= curr){
    //             s.pop();
    //         }
    //         ans[i] = s.top();
    //         s.push(curr);
    //     }
    // }
}

void prevSmaller(vector<int> &arr,stack<int> &s,vector<int> &ans){
    for(int i = 0;i<arr.size();i++){
        int curr = arr[i];
        while(s.top()>= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
}


int main()
{
    vector<int> arr = {2,1,4,3};
    vector<int> ans(arr.size());
    stack<int> s;
    s.push(-1);
    nextSmaller(arr,s,ans);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    prevSmaller(arr,s,ans);
    for(auto i:ans){
        cout<<i<<" ";
    }
    //o(n*n);
    // for(int i = 0;i<arr.size();i++){
    //     for(int j = i+1;j<arr.size();i++){
    //         if(arr[j]<arr[i]){
    //             ans.push_back(arr[j]);
    //             break;
    //         }else{
    //             ans.push_back(-1);
    //             break;
    //         }
    //     }
    // }
    // ans.push_back(-1);

    

}