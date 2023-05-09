#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        cout<<"node deleted "<<this->data<<endl;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

int findlen(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void deleteAtPos(Node* &head,Node* &tail,int pos){
    if(head == NULL){
        cout<<"cannot delete linked list empty"<<endl;
    }

    if(pos == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    int len = findlen(head);
    if(pos >= len){
        int i = 1;
        Node* prev = head;
        while(i < len-1){
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = prev;
        return;
    }

    int i = 1;
    Node* prev = head;
    while(i<pos-1){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    curr->next->prev = curr->prev;
    prev->next = curr->next;
    curr->prev = NULL;
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
    head->prev = newNode;
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
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPos(Node* &head,Node* &tail,int pos,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(pos == 1){
        insertAtHead(head,tail,data);
        return;
    }

    int len = findlen(head);

    if(pos >= len){
        insertAtTail(head,tail,data);
        return;
    }

    int i = 1;
    Node* previ = head;
    while(i < pos-1){
        previ = previ->next;
        i++;
    }
    Node* curr = previ->next;
    Node* newNode = new Node(data);
    newNode->next = curr;
    curr->prev = newNode;
    previ->next = newNode;
    newNode->prev = previ;

}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    Node* head = first;
    Node* tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    print(head);

    cout<<endl;

    insertAtHead(head,tail,98);

    print(head);

    cout<<endl;
    insertAtTail(head,tail,78);
    print(head);

    cout<<endl;
    insertAtPos(head,tail,3,67);
    print(head);

    cout<<endl;
    deleteAtPos(head,tail,1);
    print(head);
    cout<<endl;
    deleteAtPos(head,tail,2);
    print(head);

}