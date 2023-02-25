#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &arr)
{
    int temp = INT_MAX;
    for(int i=0;i<arr.size()-1;i++)
    {
        int minidx = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[minidx]){
                minidx = j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
}
int main()
{
    vector<int> arr{5,4,3,2,1};
    selectionsort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}