#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> arr,int n)
{
    int Prefix[n];
    Prefix[0] = arr[0];
    for(int i =1;i<n;i++){
        Prefix[i] = Prefix[i-1] + arr[i];
    }

    int Suffix[n];
    Suffix[n-1] = arr[n-1];
    for(int i = n-2;i>=0;i--){
        Suffix[i] = Suffix[i+1] + arr[i];
    }

    for(int i=0;i<n;i++){
        if(Prefix[i]==Suffix[i]){
            return i+1;
        }
    }
    return -1;
}

// int solve(vector<int> arr,int n)
// {
//     if(n==1){
//         return 1;
//     }
//     int leftsum = arr[0];
//     int rightsum = arr[n-1];
//     int l = 1;
//     int h = n-2;
//     while(l!=h){
//         if(leftsum < rightsum){
//             leftsum += arr[l];
//             l++;
//         }
//         else{
//             rightsum += arr[h];
//             h--;
//         }
//     }

//     cout<<"value of l is "<<l<<endl;
//     return l+1;
// }
int main()
{
    vector<int> arr{2,3,7,8,1,9,6,5};
    int n = arr.size();
    cout<<solve(arr,n);
}