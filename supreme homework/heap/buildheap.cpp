#include<iostream>
using namespace std;

class Heap{
    int arr[101];
    int size;

    Heap(){
        size = 0;
    }

    void insert(int value){
        size = size + 1;
        arr[size] = value;
        int index = size;

        while(index > 1){
            int parentIndex = index/2;
            if(arr[index] > arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                index = parentIndex;
            }else{
                break;
            }
        }
    }

    int deleteinHeap(){
        int ans = arr[size];
        arr[1] = arr[size];
        size--;

        int index = 1;
        while(index < size){
            int left = 2*index;
            int right = 2*index+1;

            int largest = index;
            if(left < size && arr[largest]<arr[index]){
                largest = left;
            }
            if(right < size && arr[largest] < arr[index]){
                largest = right;
            }
            if(index == largest){
                break;
            }
            else{
                swap(arr[index],arr[largest]);
                index = largest;
            }
        }
        return ans;
    }
};

// void heapify(int arr[],int n, int i){
//     int index = i;
//     int leftindex = 2*i;
//     int rightindex = 2*i+1;
//     int largest = index;

//     if(largest <= n && arr[largest]<arr[leftindex]){
//         largest = leftindex;
//     }
//     if(largest <= n && arr[largest] < arr[rightindex]){
//         largest = rightindex;
//     }

//     if(largest != index){
//         swap(arr[largest],arr[index]);
//         index =largest;
//         heapify(arr,n,index);
//     }
// }

// void buildHeap(int arr[],int n){
//     for(int i = n/2;i>0;i--){
//         heapify(arr,n,i);
//     }
// }

// void heapSort(int arr[],int n){
//     int index = n;
//     while(n!=1){
//         swap(arr[1],arr[index]);
//         n--;index--;

//         heapify(arr,n,1);
//     }
// }

void heapify(int arr[], int n, int i) {
        int index = i;
        int leftIndex = 2*i;
        int rightIndex = 2*i+1;
        int largest = index;

        if(leftIndex <= n && arr[largest] < arr[leftIndex]) {
                largest = leftIndex;
        }
        if(rightIndex <= n && arr[largest] < arr[rightIndex]) {
                largest = rightIndex;
        }

        if(index != largest) {
                //left ya right child me se koi > hogya currentNode se
                swap(arr[index], arr[largest]);
                index = largest;
                heapify(arr, n, index);
        }
}

void buildHeap(int arr[], int n) {
        for(int i = n/2; i>0; i--) {
                heapify(arr,n, i);
        }
}

void heapSort(int arr[], int n) {
        while(n != 1) {
                swap(arr[1], arr[n--]);
                heapify(arr,n,1);
        }
}

int main(){
    int arr[] = {-1,12,15,11,13,14};
    int n = 5;
    buildHeap(arr,n);

    for(int i =0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr,n);
    for(int i =0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}