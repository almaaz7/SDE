#include<iostream>
using namespace std;
int * twosum(int a[],int key,int size){
    int i,sum=0;
    // static int r[10];
    for(i=0;i<size;i++){
        sum+=a[i];
        a[i]=sum;
    }
    return a;
}
int main()
{
    int key,n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int size = sizeof(a)/sizeof(int);
    int *p ;
    p = twosum(a,key,size);
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
}