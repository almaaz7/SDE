#include<iostream>
using namespace std;

class Phonedetail{
    private:
    string name;
    int ram;
    string processor;
    int battery;

    public:
    Phonedetail(string name = "NUll", int ram = 0,string processor = "null", int battery = 0){
        this->name = name;
        this->ram = ram;
        this->processor = processor;
        this->battery = battery;
    }

    Phonedetail(Phonedetail &phone){
        this->name = phone.name;
        this->ram = phone.ram;
        this->processor = phone.processor;
        this->battery = phone.battery;
    }

    void getDetail();
};

void Phonedetail::getDetail(){
        cout<<"Name "<<this->name<<endl;
        cout<<"Ram "<<this->ram<<"GB"<<endl;
        cout<<"processor "<<this->processor<<endl;
        cout<<"Battery "<<this->battery<<"MAh"<<endl;
    }

int main()
{
    Phonedetail p1("Nokia", 4, "Snap Dragon", 5000);
    p1.getDetail();
    Phonedetail p2(p1);
    p2.getDetail();
    Phonedetail p3;
    p3.getDetail();

}