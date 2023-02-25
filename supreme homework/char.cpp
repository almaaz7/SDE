#include<iostream>
#include<string.h>
using namespace std;
int getlength(char arr[])
{
    int count = 0 ;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void uppercase(char arr[])
{
    for(int i=0;arr[i]!='\0';i++){
        arr[i] = arr[i]-'a'+'A';
    }
}
void lowercase(char arr[])
{
    for(int i=0;arr[i]!='\0';i++){
        arr[i] = arr[i]-'A'+'a';
    }
}
bool palindrome(char arr[])
{
    int s = 0;
    int e = getlength(arr)-1;
    while(s<=e)
    {
        if(arr[s]==arr[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
void replace(char arr[])
{
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==' '){
            arr[i]='@';
        }
    }
}

void reverse(char arr[])
{
    int i=0;
    int e=getlength(arr)-1;
    while(i<=e)
    {
        swap(arr[i],arr[e]);
        i++;
        e--;
    }

}
int main()
{
    char arr[100];
    // cin>>arr;
    // cout<<arr<<endl;
    // cout<<getlength(arr);
    // reverse(arr);
    // cout<<arr<<endl;
    // cin.getline(arr,50);
    // cout<<arr;
    // replace(arr);
    // cout<<endl;
    // cout<<arr;
    cin>>arr;
    cout<<palindrome(arr);
    uppercase(arr);
    cout<<arr;
    lowercase(arr);
    cout<<arr;
}