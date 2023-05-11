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

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void kthNode(Node* head,int &pos,int &ans){
    if(head == NULL){
        return;
    }

    kthNode(head->next,pos,ans);

    if(pos == 0){
        ans = head->data;
    }
    pos--;
}

int solve(Node* head,int pos){
    int ans = -1;
    kthNode(head,pos,ans);
    return ans;
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

    int pos = 0;

    Node* head = first;
    print(head);

    cout<<solve(head,pos);
}