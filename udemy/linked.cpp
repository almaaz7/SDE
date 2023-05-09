#include<iostream>
#include<string>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    void create(Node* first,int n);
    void display(Node* head);
}*first;

void create(Node* first,int n)
{
    for(int i=0;i<n;i++){
        Node* temp = new Node;
        int x;
        cin>>x;
        temp->data = x;
        temp->next = first;
    }
}

void Node::display(Node* head){
    while(head!=NULL){
        cout<<head->data;
        head = head->next;
    }
}

int main()
{
    first = new Node;
    int n;
    cin>>n;
    create(first,n);

}
