#include <iostream>
#include <vector>

using namespace std;

class User
{
private:
    string username;
    string password;

public:
    User(string username, string password)
    {
        this->username = username;
        this->password = password;
    }

    string getUsername()
    {
        return this->username;
    }
    string getPassword()
    {
        return this->password;
    }
};

class UserManager
{
private:
    vector<User> users;

public:
    void registerUser()
    {
        string username;
        string password;
        cout << "Enter Username: " << endl;
        cin >> username;
        cout << "\n Enter Password: " << endl;
        cin >> password;
        User newUser(username, password);
        users.push_back(newUser);

        cout << "\n User Register Successful" << endl;
    }

    bool Login()
    {
        string username, password;
        cout << "Enter username: " << endl;
        cin >> username;
        cout << "Enter Password: " << endl;
        cin >> password;
        for (int i = 0; i < users.size(); i++)
        {
            if (users[i].getUsername() == username && users[i].getPassword() == password)
            {
                cout << "Login successful" << endl;
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }

    void showUser(){
        cout<<endl;
        for(int i = 0; i<users.size();i++){
            cout<<users[i].getUsername()<<endl;
        }
    }

    void searchUser(){
        string username;
        cout<<endl;
        cout<<"Enter username"<<endl;
        cin>>username;
        for(int i = 0 ; i < users.size(); i++){
            if(users[i].getUsername() == username){
                cout<<"Found User"<<endl;
                cout<<"Username is "<<users[i].getUsername()<<endl;
                cout<<"Password is "<<users[i].getPassword()<<endl;
            }
        }
        cout<<"User not Found"<<endl;
    }

    void deleteUser(){
        string username;
        cout<<endl;
        cout<<"Enter username"<<endl;
        cin>>username;
        for(int i = 0 ; i < users.size();i++){
            if(users[i].getUsername() == username){
                users.erase(users.begin()+i);
                cout<<"User deleted Successfully"<<endl;
            }else{
                cout<<"Invalid users"<<endl;
            }
        }
    }
};

int main()
{
    UserManager usermanage;
    int choice;
    do
    {
        cout << "\n\n 1. Register" << endl;
        cout << " 2. Login" << endl;
        cout << " 3. Search Users" << endl;
        cout << " 4. Show User" << endl;
        cout << " 5. Delete User" << endl;
        cout << " 6. Exit" << endl;
        cout << "Enter choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            usermanage.registerUser();
            break;

        case 2:
            usermanage.Login();
            break;

        case 3:
            usermanage.searchUser();
            break;

        case 4:
            usermanage.showUser(); 
            break;

        case 5:
            usermanage.deleteUser();
            break;           

        case 6:
            exit(0);    

        default:
            break;
        }
    } while (1);

    return 0;
}