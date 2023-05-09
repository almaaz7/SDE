#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[] = {3,2,1,5,6,4};
    int k = 3;
    priority_queue<int> pq;
    int i=0;
    for(;i<k;i++){
        pq.push(-arr[i]);
    }

    for(;i<6;i++){
        if(pq.top()<arr[i]){
            pq.pop();
            pq.push(-arr[i]);
        }
    }

    cout<<-pq.top();

}