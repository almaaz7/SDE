#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={3,5,4,2,8,7};

    sort(begin(a),end(a));

    for(int i:a){
        cout<<i<<" ";
    }

}