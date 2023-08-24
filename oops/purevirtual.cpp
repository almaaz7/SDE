#include<iostream>
using namespace std;

class Person{
    public:
    virtual void give(){
        cout<<"bun"<<endl;
    };
};

class Boy:public Person{
    public:
    void give(){
        cout<<"Brown Bun"<<endl;
    }
};

class Girl:public Person{
    public:
    void give(){
        cout<<"Pink bun"<<endl;
    }
};

int main(){
    Person* ptr;

    ptr = new Person();
    ptr->give();

    ptr = new Boy();
    ptr->give();

    ptr = new Girl();
    ptr->give();
}

