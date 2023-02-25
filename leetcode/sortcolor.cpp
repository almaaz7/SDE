#include<iostream>
#include<vector>
using namespace std;
void sortcolor(vector<int> &arr)
{
    int i=0;
    int s=0;
    int e = arr.size()-1;
    while(i<=e){
        if(arr[i]==0){
        swap(arr[i],arr[s]);
        i++;s++;
    }
    else if(arr[i]==1){
        i++;
    }else{
        swap(arr[i],arr[e]);
        e--;
        }
    }

}

int main()
{
    vector<int> arr{0,1,1,0,2,0,2,1};
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    sortcolor(arr);
        for(auto i:arr){
        cout<<i<<" ";
    }
}