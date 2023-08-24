#include<iostream>
using namespace std;

class Alpha{
    private:
    int a;
    int b;

    public:
    Alpha(){
        a = 5;
        b = 10;
    }

    static int stat;

    static int getstat(){
        stat++;
        return stat;
    }
};

int Alpha::stat = 0;

int main(){
    cout<<Alpha::stat<<endl;
    cout<<Alpha::getstat()<<endl;
    Alpha a1;
    cout<<a1.stat<<endl;
    cout<<a1.getstat()<<endl;
}