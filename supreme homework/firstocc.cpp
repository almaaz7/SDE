#include<iostream>
#include<vector>
using namespace std;

int firstocc(vector<int> v,int target){
    int s=0;
    int e=v.size()-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(v[mid]==target){
            ans = mid;
            e = mid-1;
        }
        else if(target < v[mid]){
            e = mid-1;
        }else{
            s = mid +1;
        }
        mid = (s+e)/2;
    }
    return ans;
}
int main()
{
    vector<int> v{1,1,2,3,3,3,3,4,5,6};
    int target = 4;
    int indexof = firstocc(v,target);
    cout<<indexof<<endl;


    \

       vff    
}