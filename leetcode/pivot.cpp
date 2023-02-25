#include<iostream>
using namespace std;
// int findpivot(int a[],int size){
//     int leftsum=0,rightsum=0;
//     for(int i=1;i<size;i++){
//         for(int j=i-1;j>=0;j--){
//             leftsum+=a[j];
//         }
//         for(int j=i+1;j<size;j++){
//             rightsum+=a[j];
//         }
//         if(leftsum==rightsum){
//             return a[i];
//         }
//     }
//     return -1;
// }
int findElement(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        int leftSum = 0;
        for (int j = i - 1; j >= 0; j--) {
            leftSum += arr[j];
        }
 
        int rightSum = 0;
        for (int k = i + 1; k < n; k++) {
            rightSum += arr[k];
        }
 
        if (leftSum == rightSum) {
            return i;
        }
    }
 
    return -1;
}

int main()
{
    int a[]={2,1,-1};
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    int size = sizeof(a)/sizeof(a[0]);
    cout<<size;
    cout<<findElement(a,size)<<endl;
}