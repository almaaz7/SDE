#include<iostream>
using namespace std;
//by making the base class destructor virtual
//first the derived class object will be deleted and 
//then the base class object will be delete 
class Base{
    public:
    virtual ~Base(){
        cout<<"base class deleted"<<endl;
    }
};

class Derived:public Base{
    public:
    ~Derived(){
        cout<<"Derived class Deleted"<<endl;
    }
};

int main()
{
    Base* ptr = new Derived();
    delete ptr;
}




