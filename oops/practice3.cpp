#include<iostream>
using namespace std;
class BankAccount{
    private:
    int accountno;
    int balance;

    public:
    BankAccount(int accountno){
        this->accountno = accountno;
        this->balance = 0;
    }

    void deposite(){
        cout<<"enter the amount "<<endl;
        int money;
        cin>>money;
        this->balance += money;
        cout<<"Your balace is "<<this->balance<<endl;
    }

    void withdraw(){
        cout<<"enter the amount"<<endl;
        int money;
        cin>>money;
        this->balance -= money;
        cout<<"Your balace is "<<this->balance<<endl;
    }
};

int main()
{
    BankAccount p1(1);
    p1.deposite();
    p1.withdraw();
}