#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>& arr){
    int l = 0;
    int m = 0;
    int h = arr.size()-1;
    while(m<h){
        if(arr[m] == 0){
            swap(arr[l++],arr[m++]);
        }else if(arr[m] == 1){
            m++;
        }else{
            swap(arr[m],arr[h--]);
        }
    }
}
int main()
{
    vector<int> arr = {2,0,2,1,1,0};
    solve(arr);
    for(auto i : arr){
        cout<<i<<' ';
    }
}