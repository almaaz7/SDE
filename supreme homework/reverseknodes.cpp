#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len=0;
    while(head!=NULL){
        head = head->next;
        len++;
    }
    return len;
}

Node* reversekNodes(Node* head,int k)
{
    if(head == NULL){
        cout<<"ll is empty"<<endl;
        return NULL;
    }
    int len = getLength(head);
    if(k > len){
        cout<<"cannot reverse"<<endl;
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    int count = 0;
    while(count < k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(forward != NULL){
        head->next = reversekNodes(forward,k);
    }

    return prev;
}

int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    int k = 5;
    Node* head = first;
    print(head);
    head = reversekNodes(head,k);
    print(head);


}