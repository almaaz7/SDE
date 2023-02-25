#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int> &arr)
{
    int s = 0;
    int e = arr.size()-1;
    int i = 0;
    while(i<=e){
        if(arr[i]==0){
            swap(arr[i++],arr[s++]);
        }else if(arr[i]==1){
            i++;
        }else{
            swap(arr[i],arr[e--]);
        }
    }
}
int main()
{
    vector<int> arr{0,1,1,0,2,0,2,0,1};
    sort012(arr);
    for(auto i:arr){
        cout<<i;
    }
}