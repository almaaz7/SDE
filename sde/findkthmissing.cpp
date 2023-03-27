#include<iostream>
#include<vector>
using namespace std;
 
// int kthmissing(vector<int> &arr,int k){
//     int brr[1000];
//     int j=0,m=0;
//     for(int i=1;i<1001;i++){
//         if(i != arr[j]){
//             brr[m++] = i;
//         }else j++;
//     }
//     return brr[k-1];
// }
int main()
{
    vector<int> arr{1,2,3,4};
    int k = 2;
    cout<<kthmissing(arr,k);
}