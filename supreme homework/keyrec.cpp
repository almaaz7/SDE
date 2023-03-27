#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> arr,int key,int i)
{
    if(arr[i]==key || i==arr.size())
    {
        return arr[i];
    }
    return find(arr,key,++i);
}
int main()
{
    vector<int> arr{1,2,3,4,5};
    int key = 9;
    int i=0;
    cout<<find(arr,key,i);
}