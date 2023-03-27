#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivotindex = s;
    int pivotelement = arr[s];

    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivotelement){
            count++;
        }
    }

    int rightindex = s+count;
    swap(arr[pivotindex],arr[rightindex]);
    pivotindex = rightindex;

    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivotelement){
            i++;
        }
        while(arr[j]>pivotelement){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i],arr[j]);
        }
    }

    return pivotindex;

}

void quickSort(int arr[],int s,int e)
{
    if(s>=e)
    return;

    int p = partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main()
{
    int arr[] = {5,4,3,4,2,1,2,4,5,6,8};
    int n = 11;
    int s = 0;
    int e = n-1;
    quickSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}