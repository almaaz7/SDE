#include<iostream>
using namespace std;

int saydigit(int n,string digit[])
{
    if(n<=0){
        return 0;
    }

    int i = n%10;
    n=n/10;
    saydigit(n,digit);
    cout<<digit[i]<<" ";
    return 1;
}

int main()
{
    string digit[] = {"zero","one","two","three",
    "four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    saydigit(n,digit);

}