#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int minelement(vector<int> arr)
{
    int min = INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int maxelement(vector<int> arr)
{
    int max = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}


int main()
{
    vector<int> arr{1,2,3,4,5};
    cout<<minelement(arr)<<endl;
    cout<<maxelement(arr)<<endl;
    cout<<*max_element(arr.begin(),arr.end());
}