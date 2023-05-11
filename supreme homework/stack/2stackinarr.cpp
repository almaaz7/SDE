#include<iostream>
using namespace std;
class Stack{
    private:
    int* arr;
    int size;
    int top1;
    int top2;
    public:

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if(top2 - top1 == 1){
            cout<<"stack 1 overflow"<<endl;
        }else{
            top1++;
            arr[top1] = data;
        }
    }

    void pop1(){
        if(top1 == -1){
            cout<<"stack 1 underflow"<<endl;
        }else{
            arr[top1] = 0;
            top1--;
        }
    }

    void push2(int data){
        if(top2 - top1 == 1){
            cout<<"stack 2 overflow"<<endl;
        }else{
            top2--;
            arr[top2] = data;
        }
    }

    void pop2(){
        if(top2 == size){
            cout<<"stack 2 underflow"<<endl;
        }else{
            arr[top2] = 0;
            top2++;
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" "<<endl;
        }
    }
};

int main()
{
    Stack s(10);

    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();    
    s.push1(60);
    s.print();
    s.push2(100);
    s.print();
    s.push2(200);
    s.print();
    s.push2(300);
    s.print();
    s.push2(400);
    s.print();
        s.push2(40);
    s.print();

}