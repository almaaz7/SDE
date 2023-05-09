#include<iostream>
#include<vector>
using namespace std; 
int solve(vector<int>& arr)
{
    int maxi = INT_MIN;
    for(int i=0;i<arr.size()-2;i++){
        if(arr[i]*arr[i+1]>maxi){
            maxi = arr[i]*arr[i+1];
        }
    }
    return maxi;
}
int main()
{
    vector<int> arr{-2,0,-1};
    cout<<solve(arr);
}