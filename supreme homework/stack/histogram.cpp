#include<iostream>
#include<vector>
#include<stack>
using namespace std;
//o(n*n) solved by me
// int solve(vector<int> &heights)
// {
//     int maxi = 0;
//     for(int i = 0;i<heights.size();i++){
//         int count=1;
//         int j = 1;
//         while(heights[i-j] > heights[i] && (i-j)>=0){
//             count++;
//             j++;
//         }
//         int k = 1;
//         while(heights[i+k] > heights[i] && (i+k)<heights.size()){
//             count++;
//             k++;
//         }
//         int area = count * heights[i];
//         maxi = max(area,maxi);
//     }
//     return maxi;
// }

vector<int> prevSmaller(vector<int>& input)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());

    for(int i =0;i<input.size();i++){
        int curr = input[i];
        while(s.top() > curr){
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

vector<int> nextSmaller(vector<int>& input)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());

    for(int i = input.size()-1;i>=0;i--){
        int curr = input[i];
        while(s.top() > curr){
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main()
{
    vector<int> heights{2,1,4,3};
    vector<int> ans = prevSmaller(heights);

    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    ans = nextSmaller(heights);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}