#include<iostream>
#include<vector>
using namespace std;
int* merge(vector<int> arr,vector<int> brr){
    int* crr = new int[20];
    int i,j,k=i=j=0;
    while(i<arr.size() && j<brr.size()){
        if(arr[i]<brr[j]){
            crr[k]=arr[i];
            k++;i++;
        }
        else{ 
        crr[k++]=brr[j++];
        }
    }

    while(i<arr.size()){
        crr[k++]=arr[i++];
    }
    while(j<brr.size()){
        crr[k++]=brr[j++];
    }
    return crr;
}
int main()
{
    vector<int> arr{1,2,3,4,5,80,90};
    vector<int> brr{6,7,8,9,10,21};

    int *c = merge(arr,brr);
    for(int i=0;i<(arr.size()+brr.size());i++){
        cout<<c[i]<<" ";
    }
}