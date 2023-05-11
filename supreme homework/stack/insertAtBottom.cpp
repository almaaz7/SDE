#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s,int &target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s,target);
    s.push(temp);
}

void insertAtbottom(stack<int> &s){
    int target = s.top();
    s.pop();
    solve(s,target);
}
int main()
{
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(9);
    s.push(11);

    insertAtbottom(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
