#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base class constructor default"<<endl;
    }

    Base(int x){
        cout<<"Base class parameterised "<<x<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived constructor"<<endl;
    }

    Derived(int x):Base(x){
        cout<<"parameterized contructor "<<x;
    }
};

int main()
{
    Derived a1;

    Derived a2(10);
}