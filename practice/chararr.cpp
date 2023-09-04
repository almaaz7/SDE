#include<iostream>
#include<string.h>
using namespace std;
bool palindrome(char arr[]){
    int i=0;
    int j=strlen(arr)-1;
    while(i<=j){
        if(arr[i++]!=arr[j--]){
            return false;
        }
    }
    return true;
}
void replacespace(char arr[]){
    
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i] == ' ');{
            arr[i]='@';
        }
    }
}
int main()
{
    char arr[100];
    cin.getline(arr,50);
    cout<<arr;
    cout<<"palindrom"<<endl;
    cout<<palindrome(arr);
}