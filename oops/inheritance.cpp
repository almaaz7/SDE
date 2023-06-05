#include<iostream>
using namespace std;

class Rect{
    public:
    int length;
    int breadth;

    void show(){
        cout<<"lenght"<<this->length<<endl;
        cout<<"breadth"<<this->breadth<<endl;
    }
};

class Cuboid:public Rect{
    public:
    int height;

    void display(){
        cout<<"height"<<this->height<<endl;
    }
};

int main()
{
    Cuboid c;
    c.length = 10;
    c.breadth = 5;
    c.height = 7;
    c.display();
    c.show();
    
}