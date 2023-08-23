#include<iostream>
using namespace std;

class Rectangle{
    public:
    int lenght;
    int breadth;

    void show(){
        cout<<"lenght is "<<lenght<<endl;
        cout<<"breadth is "<<breadth<<endl;
    }

    void area(){
        cout<<"area is "<<this->lenght*this->breadth;
    }
};

class Cuboid:public Rectangle{
    public:
    int height;
    void display(){
        cout<<"Height is "<<height;
    }
    void volume(){
        cout<<"volume is "<<this->lenght*this->breadth*this->height;
    }
};

int main(){
    Cuboid c;
    c.lenght = 10;
    c.height =20;
    c.breadth = 30;
    c.show();
    c.display();

    c.volume();
    c.area();
}