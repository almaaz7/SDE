#include<iostream>
using namespace std;

int main(){
    int m=3;
    int n=3;
    int arr[m][n];
    for(int row=0;row<m;row++){
        for(int col = 0;col<n;col++){
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<m;row++){
        for(int col = 0;col<n;col++){
             cout<<arr[row][col];
        }
        cout<<endl;
    }
}