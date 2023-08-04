#include<iostream>
using namespace std;
void solve(int arr[],int size){
    int l = 0;
    int m = 0;
    while(m<size){
        if(arr[m]<0){
            swap(arr[l++],arr[m++]);
        }else{
            m++;
        }
    }
}
int main()
{
    int arr[6] = {1,2,-3,4,-4,-5};
    solve(arr,6);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}