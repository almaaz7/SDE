#include<iostream>
using namespace std;
int main(){
    int m ,n;
    cout<<"enter the size of 2D array";
    cin>>m;
    cin>>n;
    int a[m][n];
    int b[m][n];
    // int c[m][n];
    
    cout<<"enter the number for  element";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"transpose of this array is ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j] = a[j][i];
        }
    }
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             c[i][j]= a[i][j] + b[i][j];
//         }
//     }
//     cout<<"now the addtion of these 2 array is :"<<endl;
//           for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<c[i][j]<<" ";
//         }
//         cout<<endl;
// }
// }