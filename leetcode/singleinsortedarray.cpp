#include<iostream>
#include<vector>
using namespace std;
int sorted(vector<int> arr)
{
            int s=0;
        int e=arr.size()-1;
        int mid = (s+e)/2;
        while(s<=e){
            if(s==e)
            return arr[s];
            if(mid%2==0){
                if(arr[mid]==arr[mid+1]){
                    s=mid+2;
                }else{
                    e=mid;
                }
            }else{
                if(arr[mid]==arr[mid-1]){
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }
            mid = (s+e)/2;
        }
        return arr[s];
}
int main()
{
    vector<int> arr{3,3,7,7,10,11,11};
    cout<<sorted(arr);
}