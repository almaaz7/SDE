#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int solve(vector<int> arr)
// {
//     int n = arr[arr.size()-1];
//     int s = n*(n+1)/2;
//     int sum = 0;
//     for(int i=0;i<arr.size();i++){
//         sum+=arr[i];
//     }
//     return s-sum;
// }

// int solve(vector<int> arr){
//     int diff = arr[0]-0;int ans;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]-i!=diff){
//             ans = i+diff;
//             break;
//         }
//     }
//     return ans;
// }

// void solve(vector<int> arr,int n,int m){
//     int* b = new int[m];
//     for(int i=0;i<=m;i++){
//         b[i]=0;
//     }
//     for(int i=0;i<arr.size();i++){
//         b[arr[i]]++;
//         cout<<i<<" ";
//         cout<<"hello";
//     }
//     for(int i=n;i<=m;i++){
//         if(b[i]==0){
//             cout<<i<<" ";
//             cout<<"hello";
//         }
//     }

// }
int main()
{
    int arr[] = {5,2,3,6,1,8};
    int l = 1;
    int h = 8;
    int* b = new int[8];
    for(int i=0;i<h;i++){
        b[i]=0;
    }
    for(int i=0;i<6;i++){
        b[arr[i]]=1;
    }
    for(int i=l;i<=h;i++){
        if(b[i]==0){
            cout<<i<<" ";
        }
    }
}