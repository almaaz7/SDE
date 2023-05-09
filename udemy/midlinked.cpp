#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        cout<<"default constructor is called";
        this->data = 0;
        this->next = nullptr; 
    }

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }

};

void insertAtPos(Node* &head,Node* &tail,int data,int pos){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    Node* temp = head;
    int i = 1;
    while(i < pos){
        temp = temp->next;
        i++;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }  
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;  
}

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node * newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtTail(head, tail, 77);

    insertAtPos(head,tail,67,3);
    

    print(head);
    
}