#include<iostream>
using namespace std;
void reversearr(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int sumofarr(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int minimum(int arr[],int n){
    int temp=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<temp){
            temp=arr[i];
        }
    }
    return temp;
}
int maximum(int arr[],int n){
    int temp=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
    return temp;
}
void getarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void showarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int main()
{
    int arr[100],n;
    cin>>n;
     getarr(arr,n);
     showarr(arr,n);
     cout<<maximum(arr,n)<<endl;
     cout<<minimum(arr,n)<<endl;
     cout<<sumofarr(arr,n)<<endl;
     reversearr(arr,n);
     showarr(arr,n);
}