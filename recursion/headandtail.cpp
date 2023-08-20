#include<iostream>
using namespace std;
void printDecandInc(int i,int n){
    if(i==n){
        return;
    }
    cout<<i<<" ";
    printDecandInc(i+1,n);
    cout<<i<<" ";
}
int main()
{
    printDecandInc(1,5);
}