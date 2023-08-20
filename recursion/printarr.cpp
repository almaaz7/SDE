#include<iostream>
using namespace std;
void printarr(int arr[],int n,int index){
    if(index==n){
        return;
    }
    
    //cout<<arr[index]<<" "; //head
    printarr(arr,n,index+1);
    cout<<arr[index]<<" "; //tail print rev
}
int main()
{
    int arr[] = {1,3,4,5,6,7};
    int n = 6;
    printarr(arr,n,0);
    cout<<"hello";
}