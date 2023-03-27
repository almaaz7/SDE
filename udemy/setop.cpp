#include<iostream>
using namespace std;
int k=0;
int* unionn(int arr[],int brr[],int len1,int len2)
{
    int* crr = new int[len1+len2];
    int i=0;
    int j=0;
    
    while(i<len1 && j<len2){
        if(arr[i]<brr[j]){
            crr[k]=arr[k];
            i++;k++;
        }else if(arr[i]>brr[j]){
            crr[k]=brr[j];
            j++;k++;
        }else{
            crr[k]=arr[i];
            i++;j++;k++;
        }
    }
    return crr;
}
int main()
{
    int arr[] = {3,5,9,4,6};
    int brr[] = {8,4,7,2,5};

    int len1 = 5;
    int len2 = 5;

    int *d = unionn(arr,brr,len1,len2);
    for(int i=0;i<k;i++){
        cout<<d[i]<<" ";
    }



}