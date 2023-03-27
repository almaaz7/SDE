#include<iostream>
using namespace std;

// void printper(string str,int i){
//   if(i>=str.length()){
//     cout<<str<<" ";
//     return;
//     }
//     for(int j=i;j<str.length();j++)
// {
//   swap(str[i],str[j]);
//   printper(str,i+1);
//   swap(str[i],str[j]);
//   }
//   }


// int main() {
//   string str = "abc";
//   int i=0;
//   printper(str,i);
//   return 0;
// }

void printper(string s,int k)
{
    static int a[10]={0};
    static int res[10];

    int i;
    if(s[k]=='\0'){
        res[k]='\0';
        cout<<res<<" ";
    }
    else{
        for(i = 0;s[i]!='\0';i++){
            if(a[i]==0){
                res[k]=s[i];
                a[i]=1;
                printper(s,k+1);
                a[i]=0;
            }
        }
    }
}

int main()
{
    // string str = "abc";
    int arr[] = {1,2,3};
    int k = 0 ;
    printper(str,k);
}