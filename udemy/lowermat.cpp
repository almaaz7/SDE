#include<iostream>
using namespace std;
class LowerTri{
private:
    int* A;
    int n;
public:
    LowerTri(){
        A = new int[2*(2+1)/2];
    }
    LowerTri(int n){
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    ~LowerTri(){
        delete[] A;
    }

    void set(int i,int j,int x);
    int get(int i,int j);
    void display(); 
};

void LowerTri::set(int i,int j,int x)
{
    if(i>=j){
        A[i*(i-1)/2+j-1] = x;
    }
}

int LowerTri::get(int i,int j){
    if(i>=j){
        return A[i*(i-1)/2+j-1];
    }
    return 0;
}

void LowerTri::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<A[i*(i-1)/2+j-1]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int d;
    cin>>d;
    int x;
    LowerTri l1(d);
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            cin>>x;
            l1.set(i,j,x);
        }
    }

    l1.display();
}