#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    k=n;
    for(int i=1;i<=n;i++){
        int count =1;
        for(int j = 1;j<=k;j++){
            if(j<n-i+1){
                cout<<" ";
            }else if(j<=n){
                cout<<count++;

            }else{
                cout<<--count;
            }
        }
        k++;
        cout<<endl;
    }
}