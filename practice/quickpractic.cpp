#include<iostream>
#include<algorithm>
using namespace std;


int partition(int arr[],int s,int e)
{
    int pivotElement = arr[s];

    int count = 0;
    for(int i = s+1;i<e;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }

    int rightIndex = s + count;
    swap(pivotElement,arr[rightIndex]);
    int pivotIndex = rightIndex;

    int i = s;
    int j = e;

    while(i< pivotIndex && j > pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j]> pivotElement){
            j--;
        } 

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
        return pivotIndex;
}

void quickSort(int arr[],int s,int e)
{
    if(s>=e){
        return;
    }
    
    int p = partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main()
{
    int arr[] = {7,10,4,3,20,15};
    quickSort(arr,0,5);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}