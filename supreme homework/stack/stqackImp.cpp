#include<iostream>
using namespace std;

class Stack{
    private:
    int top;
    int* arr;
    int size;

    public:
    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data){
        if(size-top>1){
            top++;
            arr[top] = data;
        }else{
            cout<<"overflow"<<endl;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"underflow"<<endl;
        }else{
            top--;
        }
    }
    int getTop(){
        if(top == -1){
            cout<<"stack empty"<<endl;
        }

            return arr[top];
        
    }

    int getsize(){
        return top+1;
    }
    
    bool isempty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};

int main()
{
    Stack s(10);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isempty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }

    cout<<s.getsize();
}