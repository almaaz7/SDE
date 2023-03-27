#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int>& arr,int& k,int s,int e)
{
    if(s>=e){
        return -1;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==k)
    {
        return mid;
    }

    if(arr[mid]<k){
        return binary(arr,k,mid+1,e);
    }
    return binary(arr,k,s,mid-1);
}
int main()
{
    vector<int> arr{1,2,3,4,5,6,7};
    int key = 6;
    int s=0;
    int e = arr.size()-1;
    cout<<binary(arr,key,s,e);
}