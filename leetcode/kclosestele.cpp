#include<iostream>
#include<vector>
using namespace std;

vector<int> solve(vector<int> arr,int k,int x){
    vector<int> c;
    int l=0;
    int h=arr.size()-1;
    while(h-l>=k){
        if(x-arr[l] > arr[h]-x){
            l++;
        }else{
            h--;
        }
    }
    for(int i = l ;i<=h;i++){
        c.push_back(arr[i]);
    
    
}
return c;
}
int main()
{
    vector<int> arr{1,2,3,4,5};
    int k = 4;
    int x = 3;
    vector<int> c = solve(arr,k,x);
    for(auto i : c){
        cout<< i<<" ";
    }
}