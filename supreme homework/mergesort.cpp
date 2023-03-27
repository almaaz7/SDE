#include<iostream>

using namespace std;
void merge(int* arr,int s,int e)
{
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *left = new int[len1];
    int *right = new int[len2];
    int k = s;
    for(int i=0;i<len1;i++){
        left[i] = arr[k];
        k++;
    }
    k = mid+1;
    for(int i=0;i<len2;i++){
        right[i] = arr[k];
        k++;
    }

    int leftindex = 0;
    int rightindex = 0;
    int mainarrindex = s;

    while(leftindex < len1 && rightindex < len2)
    {
        if(left[leftindex]<right[rightindex]){
            arr[mainarrindex++]=left[leftindex++];
        }else{
            arr[mainarrindex++]=right[rightindex++];
        }
    }

    while(leftindex<len1){
        arr[mainarrindex++] = left[leftindex++];
    }
    while(rightindex<len2){
        arr[mainarrindex++]=right[rightindex++];
    }
}
void mergeSort(int* arr,int s,int e)
{
    if(s>=e) return;

    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[] = {9,6,4,7,4,3,2,6,3};
    int s=0;
    int e = 8;
    mergeSort(arr,s,e);
    for(int i:arr){
        cout<<i<<" ";
    }
}