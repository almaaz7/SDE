#include<iostream>
using namespace std;

class House{
    private:
    int length,breadth;
    public:
    void setData(int x,int y){
        length = x;
        breadth = y;
    }

    void area(){
        cout<<length*breadth;
    }
};

int main()
{
    House h1;
    h1.setData(500,600);
    h1.area();
}