#include<iostream>
using namespace std;
class Param{
public:
    int val;

    void operator+(Param obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<value1-value2;
    }
};

int main()
{
    Param object1, object2;
    object1.val = 8;
    object2.val = 10;

    object1 + object2;
}