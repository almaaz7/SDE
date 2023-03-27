#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr{6,3,8,10,16,7,5,2,9,14};
    int k =10;
    int m = *max_element(arr.begin(),arr.end());
    vector<int> h(m+1,0);
    for(int i=0;i<arr.size();i++){
        int element = k-arr[i];
        if(h[element]!=0 && element > 0){
            cout<<arr[i]<<" "<<k-arr[i]<<" "<<endl;
        }
        h[arr[i]]++;
    }
}
// int main()
// {
//     vector<int> arr{6,3,8,10,16,7,5,2,9,14};
//     int k = 10;
//     for(int i=0;i<arr.size()-1;i++){
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<arr[i]<<"+"<<arr[j]<<endl;
//             }
//         }
//     }
// }