#include <iostream>
using namespace std;

void add(int a, int b)
{
    int c;
    c = a + b;
    cout << "the solution of add is " << c << endl;
}
void sub(int a, int b)
{
    int c;
    c = a - b;
    cout << "the solution of subraction is " << c << endl;
}
void mul(int a, int b)
{
    int c;
    c = a * b;
    cout << "the solution of multiply is " << c << endl;
}
void divi(int a, int b)
{
    int c;
    c = a / b;
    cout << "the solution of add is " << c << endl;
}
int main()
{
    bool flag = true;

    while (flag)
    {
        string ans;
        cout << "do you want to calculate" << endl;
        cin >> ans;
        if (ans == "yes")
        {
            int a;
            int b;
            char p;
            cout << "enter your first no.: " << endl;
            cin >> a;
            cout<<endl;
             cout << "enter the operation: " << endl;
            cin >> p;
            cout << "enter your second no. : " << endl;
            cin >> b;
            switch (p)
            {
            case '+':
                add(a, b);
                break;
            case '-':
                sub(a, b);
                break;
            case '*':
                mul(a, b);
                break;
            case '/':
                divi(a, b);
                break;

            default:
                cout << "error" << endl;
                break;
            }
        }
        else
        {
            cout<<"exiting calculator";
            flag = false;
        }
    }
}