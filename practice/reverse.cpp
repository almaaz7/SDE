#include<iostream>
using namespace std;

void reverse(int arr[],int size,int k){
    int s=0;
    int temp = k;
    int e=size-1;
            while(s<=k){
            swap(arr[s],arr[k]);
            s++;
            k--;
        }
        s=temp+1;
        while(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    // while(start<=end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }
}
int main()
{
    int arr[10],n,k=2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    reverse(arr,n,k);
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}