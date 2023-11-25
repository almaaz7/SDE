#include<iostream>
using namespace std;

void sub(int a,int b){
    int c = a-b;
    cout<<"in function subtraction is "<<c<<endl;
}
void add(int a,int b){
    int c = a+b;
    cout<<"in function addition is "<<c<<endl;

}
void mul(int a,int b){
    int c = a*b;
    cout<<"in function the multiply is "<<c<<endl;

}
void divi(float a,float b){
    float c = a/b;
    cout<<"in function the divison is "<<c<<endl;

}

int main(){
    int a,b;
    cin>>a>>b;
    sub(a,b);
    add(a,b);
    mul(a,b);
    divi(a,b);
}