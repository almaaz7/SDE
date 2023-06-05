#include<iostream>
using namespace std;

class Base{
    public:

    virtual void show(){
        cout<<"Base Class"<<endl;
    }
};


class Derived1: public Base{
    public:
    void show(){
        cout<<"Derived1 class"<<endl;
    }
};

class Derived2: public Base{
    public:
    void show(){
        cout<<"Derived2 class"<<endl;
    }
};

int main()
{
    //we are unable to access the function of derived class
    //so to solve the problem we have to make the function
    //in base class virtual.
    //function exist in base class but cannot be used
    Base *ptr;
    ptr = new Derived1();
    ptr->show();

    ptr = new Derived2();
    ptr->show();
}