#include<iostream>
using namespace std;

int b = 100;//global variable

void function1(){
    int a = 10;
    cout<<"i am in function  1 value is "<<a<<endl;
}

void function2(){
    int a = 40;
    cout<<"i am in fucniton 2 value is "<< a<<endl;
    cout<<"value of b is "<<b<<endl;
}

int main(){
    function1();
    function2();
    // // int a = 100;
    // // cout<<a;
    // // int a = 100;
    // // cout<<a;
    // if(0){
    //     int a = 10;
    //     cout<<a;
    // }else{
    //     int a = 20;
    //     cout<<a;
    // }
}