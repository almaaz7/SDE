#include<iostream>
using namespace std;

class Animal{
    public:
    string name;

    void voice(){
        cout<<"Sound"<<endl;
    }
};

class Dog:public Animal{
    public:
    
    void voice(){
        Animal::voice();//for calling base class function
        cout<<"Bark"<<endl;
    }
};

int main(){
    Animal d1;
    Dog d2;
    d1.voice();
    d2.voice();
}