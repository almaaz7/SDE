#include<iostream>
using namespace std;

class Parent{
    protected:
    int num = 7;
    void print(){
        cout<<"parent class"<<endl;
    }
};

class Child:protected Parent{
    protected:
    void printchild(){
        print();
        cout<<"child class"<<endl;
        cout<<num;
    }
};

int main(){
    Child p1;
    
    p1.printchild();
}