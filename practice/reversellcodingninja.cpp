#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void reverse(Node* first)
{
    Node* curr = first;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr->data != -1){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    first = prev;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(-1);


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    print(first);

    reverse(first);

    print(first);

}
