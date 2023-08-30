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

void printKNode(Node* head, int& k){
    if(!head){
        return;
    }

    printKNode(head->next,k);
    k--;
    if(k==0){
        cout<<"kth node from end is "<<head->data;
    }
}

Node* reverseLinkedlist(Node* head){
    if(!head){
        return NULL;
    }
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

Node* recursivereverse(Node* head){
    if(head == NULL || head->next==NULL){
        return head;
    }
    Node* temp = recursivereverse(head->next);
    Node* forward = head->next;
    forward->next = head;
    head->next = NULL;
    return temp;
}

Node* reveseKgroup(Node* head, int k){
    if(!head){
        return NULL;
    }
    Node* curr = head;
    Node* prev = NULL;
    Node* temp;
    int count = 0;
    while(curr !=NULL && count<k){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        count++;
    }

    if(temp != NULL){
        head->next = reveseKgroup(temp,k);
    }
    return prev;

}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* tail = new Node(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = tail;
    int count = 0;
    int k = 2;
    printlist(head);
    cout<<endl;
    
    head = reveseKgroup(head,k);
    printlist(head);

    
    
}