#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> arr;
vector<vector<int>> permutation(vector<int>& ar,int l,int h){
    
    vector<int> v1;
    if(l==h){
        arr.push_back(ar);
        return arr;
    }
    else{
        for(int i=l;i<=h;i++){
            swap(ar[i],ar[l]);
            permutation(ar,l+1,h);
            swap(ar[i],ar[l]);
        }
    }
    return arr;

}


int main()
{
    vector<int> ar{1,2,3};
    permutation(ar,0,2);
    for (int i = 0; i < 3; i++) {
        for (
            auto it = arr[i].begin();
            it != arr[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
  

}