#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int ans[100] = {0};
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }
    for(int i=0;i<20;i++){
        if(ans[i]>1){
            cout<<i<<" ";
        }
    }
}

