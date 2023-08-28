#include<iostream>
#include<fstream>

using namespace std;

class Shopping{
    private:
    int pcode;
    float price;
    flost dis;
    string name;

    public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void remove();
    void edit();
    void list();
    void receipt();
};

void Shopping :: menu(){
    m;
    int choice:
    string email;
    string password;

    cout<<"Welcome to shopping mall"<<endl;
    cout<<"\n 1. Administrator"<<endl;
    cout<<"2. Buyer"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"Enter email: ";
        cin>>email;
        cout<<"Enter Password: ";
        cin>>password;
        if(email == "almaaz" && password == "almaaz"){
            administrator();
        }else{
            cout<<"Invalid email or password"<<endl;
        }
        break;
    
    case 2:
        buyer();
        break;

    case 3:
        exit(0);

    default:
        cout<<"Enter valid choice"<<endl;
        break;
    }
goto m;    
}

void Shopping :: administrator(){
    m;
    int choice;
    
    cout<<"1. Add item"<<endl;
    cout<<"2. Update Item"<<endl;
    cout<<"3. Remove Item"<<endl;
    cout<<"4. Back to Main menu"<<endl;
    cout<<"Enter choice"<<endl;
    cin>choice;

    switch (choice)
    {
    case 1;
        add();
        break;

    case 2:
        edit();
        break;

    case 3:
        remove();
        break;

    case 4:
        menu();
        break;          
    
    default:
        cout<<"Invalid Choice"<<endl;
        break;
    }
    goto m;
}

void Shopping :: buyer(){
    m;
    int choice;
    cout<<"1. Buy Product"<<endl;
    cout<<"2. Back to main Menu"<<endl;
    cout<<"Enter choice"<<endl;

    switch (choice)
    {
    case 1:
        receipt();
        break;

    case 2:
        menu();
        break;    
    
    default:
        cout<<"Invalid Choice"<<endl;
        break;
    }
    goto m;
}