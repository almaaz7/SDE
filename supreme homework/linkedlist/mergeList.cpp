#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*  next;

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

Node* merge(Node* &head1,Node* & head2){
    Node* tempHead = NULL;
    Node* tempTail = NULL;

    while(head1 != NULL && head2 != NULL){
        if(head1->data < head2->data){
            if(tempHead == NULL){
                tempHead = head1;
                tempTail =head1;
                head1 = head1->next;
            }else{
                tempTail->next = head1;
                tempTail = head1;
                head1 = head1->next;
            }

        }else{
            if(tempHead == NULL){
                tempHead = head2;
                tempTail = head2;
                head2 = head2->next;
            }else{
                tempTail->next = head2;
                tempTail = head2;
                head2 = head2->next;
            }
        }
    }

    while(head1 != NULL){
        tempTail->next = head1;
        tempTail = head1;
        head1 = head1->next;
    }
    while(head2 != NULL){
        tempTail->next = head2;
        tempTail = head2;
        head2 = head2->next;
    }
    return tempHead;
}

int main()
{
    Node* head1 = new Node(7);
    Node* s1 = new Node(8);
    Node* t1 = new Node(9);

    head1->next = s1;
    s1->next = t1;

    Node* head2 = new Node(1);
    Node* s2 = new Node(2);
    Node* t2 = new Node(5);
    Node* f2 = new Node(10);
    head2->next = s2;
    s2->next = t2;
    t2->next = f2;

    print(head1);
    print(head2);

    Node* head = merge(head1,head2);
    print(head);

}