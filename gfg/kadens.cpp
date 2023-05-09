#include<iostream>
using namespace std;

int solve(int arr[],int n)
{
    int mx1 = INT_MIN;
    int mx2 = INT_MIN;
    int s1=0;
    int s2=0;
    for(int i=0;i<n;i++){
        s1 += arr[i];
        
        s2+=arr[i];
        if(arr[i]<0){
            s2 = 0;
        }
    }
    return max(s1,s2);
}
int main()
{
    int arr[] = {-1,-2,-3,-4};
    cout<<solve(arr,4);
}