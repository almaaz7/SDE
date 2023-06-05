#include<iostream>
using namespace std;

class Mobile{
    private:
    string name;
    int price;
    string model;

    public:
    Mobile(string name, int price, string model){
        this->name = name;
        this->price = price;
        this->model = model;
    }

    Mobile(Mobile &mob){
        this->name = mob.name;
        this->price = mob.price;
        this->model = mob.model;
    }

    void operator <(Mobile mob2){
        int value1 = this->price;
        int value2 = mob2.price+2000;
        cout<<value1-value2;
    }

    void getMobile();
};

void Mobile::getMobile(){
    cout<<"name: "<<this->name<<endl;
    cout<<"price: "<<this->price<<endl;
    cout<<"model: "<<this->model<<endl;
}

int main()
{
    Mobile lava("lava", 10000, "x1");
    lava.getMobile();
    cout<<endl;

    Mobile punch(lava);
    punch.getMobile();

    lava < punch;
}
