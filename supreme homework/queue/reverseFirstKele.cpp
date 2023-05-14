#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &q){
    if(q.empty()){
        return;
    }
    int temp = q.front();
    q.pop();

    reverse(q);

    q.push(temp);
}

void reverseKele(queue<int> &q,int k)
{
    int n = q.size();
    int count = 0;
    stack<int> s;
    while(count < k){
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int flag = n-k;
    while(flag--){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
}

int main()
{
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);
    q.push(17);

    int k = 3;

    reverseKele(q,k);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}