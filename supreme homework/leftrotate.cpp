#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int pos;
    cin>>pos;
    vector<int> brr(n);
    int k=0;
    for(int i=pos;i<brr.size();i++){
        brr[k]=arr[i];
        k++;
    }
    for(int i=0;i<pos;i++){
        brr[k]=arr[i];
        k++;
    }
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }


}