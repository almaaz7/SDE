#include<iostream>
#include<vector>
using namespace std;
int dividebybs(int dividend,int divisor){
    int s=0;
    int e=dividend;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }
        if(mid*divisor>dividend){
            e=mid-1;
        }else{
            ans = mid;
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int dividend = 22;
    int divisor = 7;
    int ans = dividebybs(dividend,divisor);
    cout<<ans;
}