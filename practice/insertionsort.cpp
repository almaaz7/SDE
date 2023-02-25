#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{5,4,3,2,1};
    for(int i=1;i<arr.size();i++)
    {
        int val = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>arr[val]){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=val;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}