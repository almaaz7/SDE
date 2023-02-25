#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int kthmax(vector<int> arr,int k)
{
        int min = INT_MAX;
        int count = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min = arr[i];
            count++;
            if(count == k){
                cout<<"hellob";
                break;
                
            }
            cout<<"hellof";
        }
    }
    return min;
}
// int kthmin(vector<int> arr,int k)
// {
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-3];
// }

int main()
{
    vector<int> arr{7,10,4,3,15,20};
    int k = 3;
    cout<<kthmax(arr,k);
    //cout<<kthmin(arr,k);
}