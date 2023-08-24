#include<iostream>
using namespace std;

class Person{
    public:
    virtual void give(){
        cout<<"Bun"<<endl;
    }
};

class girl:public Person{
    public:
    void give(){
        cout<<"Pink Bun "<<endl;
    }
};

class Boy:public Person{
    public:
    void give(){
        cout<<"Brown Bun "<<endl;
    }
};

int main()
{
    Person* ptr = NULL;
    ptr = new Person();
    ptr->give();

    ptr = new Boy();
    ptr->give();

    ptr = new girl();
    ptr->give();


    
}