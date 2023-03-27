#include <iostream>
using namespace std;
 
class Array{
 
private:
    int* A;
    int size;
    int length;
 
public:
    Array(int size){
        this->size = size;
        A = new int [size];
    }
 
    void create(){
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++){
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }
 
    void display(){
        for (int i = 0; i < length; i++){
            cout << A[i] << " ";
        }
    }
 
    ~Array(){
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

int main() {
 
 
    Array arr(5);
    arr.create();
    arr.display();
 
 
    return 0;
}
// #include<iostream>
// using namespace std;
// void insert(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
// }
// void display(int arr[],int n)
// {
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int* A;
//     int n;
//     cin>>n;
//     A = new int[n];
//     insert(A,n);
//     display(A,n);
//     delete []A;
//     display(A,n);
// }