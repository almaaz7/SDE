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

    ~Node(){
        cout<<"node deleted"<<this->data<<endl;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int findlen(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != 0){
        temp = temp->next;
        len++;
    }
    return len;
}

void deleteNode(Node* &head,Node* &tail,int pos){
    if(head == NULL){
        cout<<"linked list empty can not delete";
    }
    if(pos == 1 ){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = findlen(head);
    if(pos >= len){
        Node* prev = head;
        int i = 1;
        while(i < len - 1){
            prev = prev->next;
            i++;
        }
        Node* temp = tail;
        prev->next = NULL;
        tail = prev;
        delete temp;
        return;
    }

    int i = 1;
    Node* prev = head;
    while(i < pos-1){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

}

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
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

void insertAtPos(Node* &head,Node* &tail,int pos,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if(pos == 0){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findlen(head);
    if(pos >= len){
        insertAtTail(head,tail,data);
        return;
    }
    int i = 1;
    Node* prev = head;
    while(i < pos){
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;
    Node* newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode;


}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,140);
    print(head);

    // cout<<endl;
    
    // insertAtTail(head,tail,65);
    // insertAtTail(head,tail,67);
    // insertAtTail(head,tail,65);
    // insertAtTail(head,tail,98);
    // print(head);

    // cout<<endl;

    // insertAtPos(head,tail,77,99);
    // print(head);

    cout<<endl;

    deleteNode(head,tail,2);
    print(head);
}