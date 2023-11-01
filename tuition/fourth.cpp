#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int count = 1;
    // for(int row = 0;row<n;row++){
    //     for(int col = 0;col<n;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
// void demo(){
//     static int a = 0;
//     cout<<a<<endl;
//     a++;
    
// }

// int main(){
    
//     for(int i=0;i<5;i++){
//         demo();
        
//     }

//     int a = 10;
//     long long int b = 90.98;
//     cout<<"size of a"<<sizeof(b);
// }