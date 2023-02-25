#include<iostream>
#include<vector>
using namespace std;
void reversearr(vector<int> &arr){
    int i=0;
    int e=arr.size()-1;
    for(int i=0;i<=e;i++){
        swap(arr[i],arr[e]);
        e--;
    }
}

int main()
{
    vector<int> arr={2,3,4,5,6};
    reversearr(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}