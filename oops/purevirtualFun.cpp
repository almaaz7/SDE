#include<iostream>
using namespace std;
//Abstract Class
//this class will not do anything
class Shop{
    public:
    //pure virutal function
    virtual void give() = 0;
};

class Boy:public Shop{
    public:
    void give(){
        cout<<"Brown Bun"<<endl;
    }
};

class Girl:public Shop{
    public:
    void give(){
        cout<<"Pink Bun"<<endl;
    }
};

int main()
{
    Shop* ptr;
    ptr = new Boy();
    ptr->give();

    ptr = new Girl();
    ptr->give();
}