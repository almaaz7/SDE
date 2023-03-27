#include<iostream>
using namespace std;


class Array{

private:
    int* A;
    int size;
    int length;

public:
    Array(int size){
        this->size = size;
        A = new int[size];
    }

    void create()
    {
        cout<<"enter the lenght of array"<<endl;
        cin>>length;
        for(int i=0;i<length;i++){
            cin>>A[i];
        }
        cout<<endl;
    }
    void display()
    {
        for(int i = 0;i<length;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }

    void append()
    {
        if(length<size){
            cout<<"enter the element to append";
            int element;
            cin>>element;
        A[length] = element;
        length++;
        }
    }

    void insert(int pos,int element)
    {
        if(pos>=0 && pos<size){
            int i;
            for(i=length;i>pos;i--){
                A[i] = A[i-1]; 
            }
            A[i] = element;
            length++;
        }
    }
    void deleto(int pos){
        if(pos>=0 && pos<size){
            int i;
            for(i=pos;i<length-1;i++)
            {
                A[i] = A[i+1];
            }
            length--;
        }
    }

    int get(int index){
        if(index>=0 && index<size)
            return A[index];
        return -1;
    }
    int set(int index, int element){
        if(index>=0 && index<size)
            return A[index] = element;
        return -1;
    }
    int sum(){
        int sum = 0;
        for(int i=0;i<length;i++){
            sum+=A[i];
        }
        return sum;
    }
    void reverse()
    {
        int i=0;
        int e=length-1;
        while(i<=e){
            swap(A[i++],A[e--]);
        }
    }
};
int main()
{
    Array arr(10);
    arr.create();
    arr.display();
    arr.append();
    arr.insert(3,9);
    arr.display();
    arr.deleto(3);
    arr.display();cout<<endl;
    cout<<arr.get(3);cout<<endl;
    arr.set(4,90);
    arr.display();cout<<endl;
    cout<<arr.sum();cout<<endl;
    arr.display();cout<<endl;
    arr.reverse();
    arr.display();

}