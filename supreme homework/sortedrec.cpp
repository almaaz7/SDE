#include<iostream>
#include<vector>
using namespace std;
bool sorted(vector<int> &arr,int i)
{
    if(i<arr.size()){
        return true;
    }
    if(arr[i+1]<arr[i]){
        
        return false;
    }
    return sorted(arr,i+1);
}
int main()
{
    vector<int> arr{1,1,1,1};
    int i=0;
    bool ans = sorted(arr,i);
    if(ans){
        cout<<"array is sorted"<<endl;
    }else{
        cout<<"array is not sorted"<<endl;
    }
    
}