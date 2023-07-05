#include<iostream>
using namespace std;

int main()
{
    enum supercar{tata=4,safari=5,nexon=8,scopio=9};

    supercar speed1;
    supercar speed2;

    speed1 = tata;
    speed2 = scopio;

    if(speed1 < speed2){
        cout<<"win for "<<speed2<<endl;
    }else{
        cout<<"win for "<<speed1<<endl;
    }

}