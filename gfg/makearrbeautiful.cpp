#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> solve(vector<int>& arr){
    stack<int> st;
    st.push(arr[0]);
    int i =1;
    while(i<arr.size()){
        if(st.empty()){
            st.push(arr[i]);
        }
        else if(st.top()>=0 && arr[i]>=0){
            st.push(arr[i]);
        }
        else if(st.top()<0 && arr[i]<0){
            st.push(arr[i]);
        }
        else{
            st.pop();
        }
        i++;
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    vector<int> arr{4,2,-2,1};
    vector<int> ans = solve(arr);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}