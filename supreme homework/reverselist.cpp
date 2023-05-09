#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head)
{
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* reverse(Node* &prev,Node* &curr)
{
    if(curr == NULL){
       Node* head = prev;
        return head;
    }

    Node* forward = curr->next;
    curr->next = prev;
    reverse(curr,forward);
}

Node* reverseUsingLoop(Node* head){
    Node* prev = NULL;
    Node* curr = head;
     
    while(curr != NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
int main()
{
    Node* first = new Node(12);
    Node* second = new Node(13);
    Node* third = new Node(14);
    Node* fourth = new Node(15);
    Node* fifth = new Node(16);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    Node* head = first;
    Node* prev = NULL;
    Node* curr = head;

    print(head);
    cout<<endl;
    head = reverseUsingLoop(head);
    print(head);
}
