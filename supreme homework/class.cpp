#include<iostream>
#include<limits>
#include<vector>
using namespace std;
int main()
{
    // vector<vector<int>> arr;

    // vector<int> a{1,2,4};
    // vector<int> b{3,4,5};
    // vector<int> c{6,7,8};

    // arr.push_back(a); 
    // arr.push_back(b); 
    // arr.push_back(c); 

    vector<vector<int>> arr(5, vector<int>(5,-8));

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}




// void printarray(int arr[][3],int n,int m){
//         for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
// }

// void transpose(int arr[][3],int n,int m,int brr[][3]){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             brr[i][j]=arr[j][i];
//         }
//     }
    
// }
// // int maxelement(int arr[][3],int n,int m){
// //     int maxi=INT_MIN;
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<m;j++){
// //             if(arr[i][j]>maxi){
// //                 maxi = arr[i][j];
// //             }
// //         }
// //     }
    
// //     return maxi;

// // }
// // int linearSearch(int arr[][3],int n,int m,int key){
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<m;j++){
// //             if(arr[i][j]==key){
// //                 return 1;
// //             }
// //         }
// //     }
// //     return 0;
// // }
// // void printrowsum(int arr[][3],int n, int m){
    
// //     for(int i=0;i<n;i++){
// //         int sum=0;
// //         for(int j=0;j<m;j++){
// //            // sum = sum + arr[j][i];//column wise
// //             sum = sum + arr[i][j];//row wise
// //         }
// //         cout<<sum<<endl;
// //     }
// // }
// int main(){
// int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int transposea[3][3];
// //printrowsum(brr,3,3);
// //cout<<linearSearch(brr,3,3,5);
// //cout<<maxelement(brr,3,3);
// printarray(brr,3,3);
// transpose(brr,3,3,transposea);
// printarray(transposea,3,3);
// }

// {
//     int arr[3][3];

//     int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<brr[j][i]<<" ";
//         }
//         cout<<endl;
//     }

// }