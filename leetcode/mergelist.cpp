#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};

void insertathead(node* &head, int data){
    node * temp = new node(data);
    temp->next = head;
    head = temp;
}

void traverse(node* &head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    node * node1 = new node(10);
    node* head = node1;
    traverse(head);
    insertathead(head,40);
    insertathead(head,49);
   // traverse(head);
    cout<<head->data<<endl;
}