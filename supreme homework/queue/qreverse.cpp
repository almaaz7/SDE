#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverse(queue<int> &q)
{
    if(q.empty()){
        return;
    }

    int temp = q.front();
    q.pop();

    reverse(q);

    q.push(temp);
}

void reverseQueueStack(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(9);

    // reverse(q);
    reverseQueueStack(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}