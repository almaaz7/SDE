#include<iostream>
using namespace std;

class Base{
    public:
    int a;

    Base(){
        cout<<"this is a base class constructor"<<endl;
    }

    Base(int a){
        this->a = a;
        cout<<"this is base param constructor"<<a<<endl;
    }
};


class Derived:public Base{
    public:
    Derived():Base(){
        cout<<"derived constructor"<<endl;
    }

    Derived(int a):Base(a){
        this->a = a;
        cout<<"derived param constr"<<a<<endl;
    }
};

int main(){
    Derived d(10);
}