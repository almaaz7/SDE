#include<iostream>
#include<vector>
using namespace std;
void movenegetive(vector<int> &arr)
{
    int s =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i+1]<0){
            swap(arr[s])
        }
    }
}
int main()
{
    vector<int> arr{-12, 11, -13, -5, 6, -7, 5, -3, -6};

}
