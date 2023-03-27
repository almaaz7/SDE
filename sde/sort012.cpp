#include<iostream>
#include<vector>
using namespace std;

void countsort(vector<int> &arr)//count method
{
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
        c0++;
        else if(arr[i]==1)
        c1++;
        else c2++;
    }
    int i=0;
    while(c0--){
        arr[i++]=0;
        //i++;
    }while(c1--){
        arr[i++]=1;
        //i++;
    }while(c2--){
        arr[i++]=2;
        //i++;
    }
}

// void sortcolor(vector<int> &arr) //3pointer
// {
//     int i=0;
//     int s=0;
//     int e=arr.size()-1;
//     while(i<=e){
//         if(arr[i]==0){
//             swap(arr[s++],arr[i++]);
//         }else if(arr[i]==1){
//             i++;
//         }else{
//             swap(arr[i],arr[e--]);
//         }
//     }
// }
int main()
{
    vector<int> arr{0,1,1,0,2,0,2,0,1};
    for(auto i:arr){
        cout<<i;
    }cout<<endl;
    countsort(arr);
    for(auto i:arr){
        cout<<i;
    }
}