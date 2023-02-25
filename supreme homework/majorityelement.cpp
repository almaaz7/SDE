#include<bits/stdc++.h>
using namespace std;
int main()//not optimize
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
}
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
        if(count>n/2){
                cout<<"majority element is"<<arr[i];
            }
    }
}