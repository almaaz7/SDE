#include<iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;
    string country;

    public:
    void setData(string name,int age,string country){
        this->name = name;
        this->age = age;
        this->country = country;
    }

    string getname(){
        return this->name;
    }

    int getage(){
        return this->age;
    }

    string getcountry(){
        return this->country;
    }
};

int main()
{
    Person p1;
    p1.setData("almaaz",21,"India");
    cout<<p1.getname()<<endl;
    cout<<p1.getage()<<endl;
    cout<<p1.getcountry()<<endl;
}