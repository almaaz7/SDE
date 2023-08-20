#include<iostream>
using namespace std;
class Circle{
    private:
    int radius;

    public:
    Circle(int radius){
        this->radius = radius;
    }
    void area(){
        cout<<3.14*radius*radius;
    }

    void circumference(){
        cout<<2*3.14*radius;
    }
};

int main()
{
    Circle c1(5);
    c1.area();
    cout<<endl;
    c1.circumference();
}