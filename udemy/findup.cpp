#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{3,6,8,8,10,12,15,15,15,15,20,20};
    int lastdup =0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1] && lastdup!=arr[i]){
            lastdup = arr[i];
            cout<<arr[i]<<" ";
        }
    }
}