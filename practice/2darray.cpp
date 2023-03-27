#include<iostream>
using namespace std;
void transpose(int arr[][10],int m,int n)
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int linearSearch(int arr[][10],int key)
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==key)
            return 1;
        }
    }    return 0;
}
void print(int arr[][10],int m,int n)
{
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int sumrow(int arr[][10])
{
    int sum = 0;
    for(int i=0;i<3;i++){
        int sum1=0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
            sum1 += arr[i][j];
        }
        cout<<sum1<<endl;
    }
    return sum;
}
int main()
{
    int m=3;
    int n=3;
    int arr[10][10];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    print(arr,m,n);
    transpose(arr,m,n);
    print(arr,m,n);



}