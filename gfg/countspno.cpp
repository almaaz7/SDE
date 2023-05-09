#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(vector<int> arr,int n)
{
    int maxi = *max_element(arr.begin(),arr.end());
    vector<int> h(maxi+1,0);
    for(int i=0;i<n;i++){
        if(h[arr[i]]<=1){
            for(int j=arr[i];j<=maxi;j+=arr[i]){
                h[j]++;
            }
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(h[arr[i]]>1){
            count++;
        }
    }
    return count;
}
// int solve(vector<int> arr,int n)
// {
//     int ans = n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]%arr[j]!=0){
//                 ans--;
//                 break;      
//             }
//         }
//     }
//     return ans;
// }
int main()
{
    vector<int> arr{5,5,5,5};
    int n = arr.size();
    cout<<solve(arr,n);
}