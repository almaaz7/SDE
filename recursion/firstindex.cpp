#include<iostream>
using namespace std;
void firstindex(int arr[],int index,int n,int target){
    

    if(index == n){
        return;
    }
    if(arr[index] == target){
        cout<<index<<" ";
    }
    firstindex(arr,index+1,n,target);
}
int main()
{
    int arr[] = {1,3,2,3,6,4,3};
    int n = 7;
    int index = 0;
    int target = 3;
    firstindex(arr,index,n,target);
}