#include<iostream>
using namespace std;

bool isPalin(string str,int len)
{
    
    for(int i=0;i<len/2;i++){
        if(str[0] != str[len-i-1]){
            return false;
        }
    }
    return true;
}
int main()
{
    string str = "MADAM";
    int len = str.length();
    if(isPalin(str,len)){
        return 0;
    }
//
    else{
        int mid = len/2;
        int i = mid -1;
        int j = mid +1;
        while(i>=0){
            if(str[i] == str[j]){
                i--,j++;
            }else{
                mid--;
                i = mid-1;
                j = mid + 1;
            }
        }
        cout<<len-j;

    }
}