#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    // int i=0;
    // int j=n-1;
    // while(i<=j){

    //     cout<<arr[i];
    //     cout<<arr[j];
    //     i++;j--;
    // }
}

// void linearSearch(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             cout<<"element is present at position"<<i+1<<endl;
//             return;
//         }
//     }
//     cout<<"element is not present"<<endl;
// }
// int main()
// {
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     linearSearch(arr,n,key);
// }