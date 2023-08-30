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
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* ans = new Node(0);
    Node* temp = ans;
    while(head1 != NULL && head2 != NULL){
        if(head1->data <= head2->data){
            Node* dummy = new Node(head1->data);
            temp->next = dummy;
            temp = dummy;
            head1 = head1->next;
        }
        else{
            Node* dummy = new Node(head2->data);
            temp->next = dummy;
            temp = dummy;
            head2 = head2->next;
        }
    }
    cout<<"hello";
    while(head1 != NULL){
        Node* dummy = new Node(head1->data);
        temp->next = dummy;
        temp = dummy;
        head1 = head1->next;
    }
    
    while(head2 != NULL){
        Node* dummy = new Node(head2->data);
        temp->next = dummy;
        temp = dummy;
        head2 = head2->next;
    }
    return ans->next;
}

void showlist(Node* head){
    if(!head){
        return;
    }
    cout<<head->data<<" ";
    showlist(head->next);
}

int main(){
    Node* head1 = new Node(1);
    Node* s1 = new Node(1);
    // Node* t1 = new Node(15);
    // Node* f1 = new Node(40);

    head1->next = s1;
    // s1->next = t1;
    // t1->next = f1;

    Node* head2 = new Node(2);
    Node* s2 = new Node(4);
    // Node* t2 = new Node(20);

    head2->next = s2;
    // s2->next = t2;
    showlist(head1);
    showlist(head2);
    Node* ans = sortedMerge(head1,head2);
    showlist(ans);
}