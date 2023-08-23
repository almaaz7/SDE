#include<iostream>
using namespace std;

class Base{
    public:
    void msg(){
        cout<<"base class"<<endl;
    }
};

class Derived:public Base{
    public:
    void msg(){
        cout<<"derived class "<<endl;
        Base::msg();
    }
};

int main()
{
    Base b1;
    b1.msg();

    Derived d1;
    d1.msg();
}