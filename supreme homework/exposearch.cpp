#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int exposearch(vector<int> arr)
{
    int s=0;
    int ans = -1;
    int e=arr.size()-1;
    int mid = s + (e-s)/2;
    // cout<<arr[0]*pow(2,mid);
    while(s<=e){
        if(arr[mid]==arr[0]*pow(2,mid)){
            s = mid + 1;
        }else{
            int ans = s;
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    vector<int> arr{10,20,25,35,45};
    cout<<exposearch(arr);
}