#include<iostream>
using namespace std;

class A{
    private:
    string name;
    int weight;

    public:
    A(string name="null", int x = 0){
        this->name = name;
        this->weight = x;
    }

    A addWeight(A w2){
        A temp;
        temp.name = name + w2.name;
        temp.weight = weight + w2.weight;
        return temp;
    }

    int operator +(A w2){
        A temp;
        int a;
        temp.name = name + w2.name;
        temp.weight = weight + w2.weight;
        a = temp.weight;
        return a;
        
    }

    void operator ++(){ //for pre increament no argument
        ++weight;
    }

    void operator ++ (int){//for post increament int argument is needed
        weight++;
    }

    void printWeight(){
        cout<<"weight is "<<this->weight;
    }

    void printvalue(){
        cout<<"name is " <<name<<endl;
        cout<<"weight is "<<weight;
    }
};

int main()
{
    A person1("almaaz",50);
    A person2("ahmed",100);
    A total;

    total = person1.addWeight(person2);
    total.printvalue();

    int a = person1 + person2;
    cout<<a;

    ++person1;
    person1.printWeight();
    person1++;
        person1.printWeight();



}