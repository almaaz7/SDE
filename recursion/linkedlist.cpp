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
        next = NULL;
    }
};

void printlist(Node* head){
    if(!head){
        return;
    }
    cout<<head->data<<" ";
    head = head->next;
    printlist(head);
}

Node* insertAthead(Node* head,int data){
    if(!head){
        return NULL;
    }

    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    return head;
    delete temp;
}

Node* insertAtTail(Node* head,Node* tail,int data){
    if(!head){
        return NULL;
    }

    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
    return tail;

}

Node* deleteAtHead(Node* head){
    if(!head){
        return NULL;
    }

    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return head;
}

Node* deleteAtTail(Node* head,Node* tail){
    if(!tail){
        return NULL;
    }
    Node* prev = head;
    while(prev->next != tail){
        prev = prev->next;
    }
    prev->next = NULL;
    tail = prev;
    return tail;
}

Node* removeKthnode(Node* head, int& k){
    if(!head){
        return NULL;
    }
    removeKthnode(head->next,k);
    k--;
    if(k==0){
        cout<<"data"<<head->data;
    }
    return head;
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* tail = new Node(50);

    head->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = tail;
    int count = 0;
    int n = 1;
    printlist(head);
    cout<<endl;
    head = removeKthnode(head,n);
    cout<<endl;
    printlist(head);
}