#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr = new int[size];
        this->size = size;
        front = 0;
        rear = 0;
    }

    void push(int data){
        if(rear == size){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void pop(){
        if(front == rear){
            cout<<"queue is empty"<<endl;
        }else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront(){
        if(front == rear){
            cout<<"q is empty"<<endl;
        }
            return arr[front];
        
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }else{
            return false;
        }
    }

    int getSize(){
        return rear - front;
    }
};

int main()
{
    Queue q(10);
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    
    cout<<"size of queue: "<<q.getSize()<<endl;

    while(!q.isEmpty()){
        cout<<q.getFront()<<" ";
        q.pop();
    }
    
}