#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

void display(struct Node* p){
    while(p){
        cout<<p->data;
        p=p->next;
    }
}

struct Node* reverse(struct Node* L1){
    struct Node* p = L1;
    struct Node* q = NULL;
    struct Node* r = NULL;

    while(p!=NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    L1 = q;
    return L1;
}

int add(struct Node* L1,struct Node* L2){
    struct Node* p = L1;
    struct Node* q = L2;
    int sum = 0;
    while(p!=NULL || q!=NULL){
    sum = p->data + q->data;
    p = p->next;
    q = q->next;
    }
    return sum;
}

int main()
{
    struct Node* L1 = new Node;
    struct Node* L12 = new Node;
    struct Node* L13 = new Node;
    L1->data = 2;
    L1->next = L12;
    L12->data = 4;
    L12->next = L13;
    L13->data = 3;
    L13->next = NULL;

    struct Node* L2 = new Node;
    struct Node* L22 = new Node;
    struct Node* L23 = new Node;
    L2->data = 2;
    L2->next = L22;
    L22->data = 4;
    L22->next = L23;
    L23->data = 3;
    L23->next = NULL;
    L1 = reverse(L1);
    display(L1);
    cout<<endl;
    L2 = reverse(L2);
    display(L2);

    cout<<add(L1,L2);


}