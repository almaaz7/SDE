#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> arr){
    int i=0;
    int s=0;
    int e=arr.size()-1;
    while(i != e)
    {if(arr[i]==0){
        swap(arr[i],arr[s]);
        i++;s++;
    }
    if(arr[i]==1){
        swap(arr[e],arr[i]);
        e--;
    
    }}
    for(int j=0;j<arr.size();j++){
        cout<<arr[j]<<" ";
    }

}
int main()
{
    vector<int> arr{1,1,0,0,1,0,0,1,0};
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(arr);
    
}