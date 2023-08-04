#include<iostream>
#include<map>
using namespace std;
int solve(int arr[],int size){

    for(int i =0 ;i<size;i++){
        int index = abs(arr[i]);

        if(arr[index] < 0){
            return index;
        }

        arr[index] *= -1;
    }
    return -1;
}

int main()
{
    int arr[5] = {1,3,2,4,3};
    int ans = solve(arr,5);
    cout<<ans;
}