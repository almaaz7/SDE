#include<iostream>
using namespace std;
int maxele(int arr[],int n,int index,int &maxi){
    if(index == n){
        return 0;
    }

    maxi = max(arr[index],maxi);

    maxele(arr,n,index+1,maxi);
    return maxi;
}
int main()
{
    int arr[] = {9,4,2,6,10,43,3,6};
    int n = 8;
    int maxi = INT_MIN;
    int index = 0;
    int ans = maxele(arr,n,index,maxi);
    cout<<ans;
}