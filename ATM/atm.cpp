#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

class ATM{
private:
    long int account_no;
    int pin;
    string name;
    double balance;
    string mobile_no;

public:
    void setData(long int account_no,int pin, string name,double balance, string mobile_no){
        this->account_no = account_no;
        this->pin = pin;
        this->name = name;
        this->balance = balance;
        this->mobile_no = mobile_no;
    }    

    long int getAccount(){
        return account_no;
    }

    int getPin(){
        return pin;
    }

    string getName(){
        return name;
    }

    double getBalance(){
        return balance;
    }

    string getMobile(){
        return mobile_no;
    }

    void withdraw(){
        int amount;
        cout<<"Enter amount"<<endl;
        cin>>amount;

        if(amount > 0 || amount <= balance){
            balance -= amount;
            cout<<"Collect your cash"<<endl;
            cout<<"Available balance is "<<balance<<endl;
        }
        else{
            cout<<"Incorrect entry or Insufficient balance"<<endl;
        }
    }

    void updateMobile(){
        string prev_no, new_no;
        cout<<"Enter old Mobile No: ";
        cin>>prev_no;
        cout<<"Enter new Mobile No: ";
        cin>>new_no;

        if(prev_no == mobile_no){
            mobile_no = new_no;
            cout<<"Successfully Updated Mobile No"<<endl;
        }else{
            cout<<"Incorrect Old Mobile No.";
        }
    }

    void getDetail(){
        cout<<"Account No.: "<<account_no<<endl;
        cout<<"Name is : "<<name<<endl;
        cout<<"Balance is : "<<balance<<endl;
        cout<<"Mobile No : "<<mobile_no<<endl;
    }
};

int main(){
    ATM user1,user2;
    user1.setData(1234567,1111,"almaaz",37000,"8318912385");

    do
    {
        
        long int useraccuont;
        int pin;
        cout<<"Enter account No: ";
        cin>>useraccuont;
        cout<<"Enter Pin: ";
        cin>>pin;
        if(useraccuont == user1.getAccount() && pin == user1.getPin()){
            do
            {
                
                int choice;
                cout<<"1. Check Balance"<<endl;
                cout<<"2. Cash Withdraw"<<endl;
                cout<<"3. User Detail"<<endl;
                cout<<"4. Update Mobile No."<<endl;
                cout<<"5. Exit"<<endl;
                cin>>choice;
                switch (choice)
                {
                case 1:
                    cout<<"Available account balance is "<<user1.getBalance();
                    _getch();
                    break;
                case 2:
                    user1.withdraw();
                    break;

                case 3:        
                    user1.getDetail();
                    break;

                case 4:
                    user1.updateMobile();
                    break;

                case 5:
                    exit(0);

                default:
                    cout<<"enter valid choice."<<endl;
                    break;
                }
            } while (1);
            
        }else{
            cout<<"incorrect account no or pin"<<endl;
        }
    } while (1);
    
}