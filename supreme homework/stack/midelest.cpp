#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> s,int mid){
    if(s.size() == mid){
        cout<<"middle element is "<<s.top()<<endl;
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s,mid);
    s.push(temp);
}
int main()
{
    stack<int> s;
    int n;
    cin>>n;
    int ele;
    for(int i =0;i<n;i++){
        cin>>ele;
        s.push(ele);
    }


    int mid = n/2+1;
    solve(s,mid);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}