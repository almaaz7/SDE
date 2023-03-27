#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(char a,char b){
    return a>b;
}
int main()
{
    string str = "almaaz";
    sort(str.begin(),str.end(),cmp);
    cout<<str<<endl;
}