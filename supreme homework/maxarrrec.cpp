#include<iostream>
using namespace std;
int max(int arr[],int n,int i)
{
    int maxi = INT_MIN;
    if(i>=n){
        return maxi; 
    }

    if(arr[i]>maxi){
        maxi = arr[i];
    }
    max(arr,n,++i);
    return maxi;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n=6;
    int i=0;
    cout<<max(arr,n,i);
}