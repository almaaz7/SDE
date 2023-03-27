#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int main()
// {
//     vector<int> arr{3,6,8,8,10,12,15,15,15,15,20,20};
//     for(int i=0;i<arr.size()-1;i++){
//         if(arr[i]==arr[i+1]){
//             int j=i+1;
//             while(arr[j]==arr[i]) j++;
//             cout<<arr[i]<<" is appearing "<<j-i<<" times"<<endl;
//             i=j-1;
//         }
//     }
// }

// int main()
// {
//     vector<int> arr{3,6,8,8,10,12,15,15,15,15,20,20};
//     int m = *max_element(arr.begin(),arr.end());
//     vector<int> h(m+1,0);
//     for(int i=0;i<arr.size();i++){
        
//             h[arr[i]]++;
        
//     }
//     for(int i=0;i<h.size();i++){
//         if(h[i]>1){
//             cout<<i<<" has occoured "<<h[i]<<" times"<<endl;
//         }
//     }
// }


int main()
{
    vector<int> arr{8,8,2,7,3,4,1,8,6,6,7};
    for(int i=0;i<arr.size();i++){
        int count = 1;
        if(arr[i]!=-1){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                 count++;
                arr[j]=-1;                   
                }
            }
            
        }
        if(count>1) cout<<arr[i]<<endl;
    }
}