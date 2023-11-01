#include<iostream>
using namespace std;

// void demo(){
//     static int a = 0;
//     cout<<a<<endl;
//     a++;
//     cout<<"address: "<<&a<<endl;
// }

void demo(){
    int a =0;
    cout<<"value of a: "<<a;
    a++;
        cout<<"address: "<<&a<<endl;

}

int main(){
    double b = 98.9;
    int c = b  + 10;
    cout<<c;
    cout<<"static variable"<<endl;
    // // demo();
    // // demo();
    // // demo();
    // // demo();
    // // for(char i=-128;i<=0;i++){
    // //     cout<<i;
    // // }
    // for(char i = 0;i<128;i++){
    //     cout<<i;
    // }
    // short a = 10;
    // int b = 10;
    // b = b+a;
    cout<<'8'+10;

}