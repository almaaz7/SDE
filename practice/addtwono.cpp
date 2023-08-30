#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void displaylist(Node *head)
{
    if (!head)
    {
        return;
    }

    cout << head->data;
    displaylist(head->next);
}

Node* reverse(Node* head){
    if(!head){
        return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;

    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

Node* addTwoNumber(Node* head1, Node* head2){
    Node* dummy = new Node();
    Node* temp = dummy;
    int carry = 0;
    while(head1 != NULL || head2!=NULL || carry){
        int sum = 0;
        if(head1 != NULL){
            sum = head1->data + sum;
            head1 = head1->next;
        }
        if(head2 != NULL){
            sum = sum + head2->data;
            head2 = head2->next;
        }

        sum = sum + carry;
        carry = sum / 10;
        Node* node = new Node(sum%10);
        temp->next = node;
        temp = node;
    }
    return dummy->next;
}

int main(){
    Node* head1 = new Node(1);
    Node* second = new Node(3);
    Node* third = new Node(2);

    head1->next = second;
    second->next = third;

    Node* head2 = new Node(9);
    Node* s2 = new Node(4);
    Node* t2 = new Node(4);

    head2->next = s2;
    s2->next = t2;

    displaylist(head1);
    cout<<endl;
    displaylist(head2);
    cout<<endl;
    cout<<"reverse"<<endl;
    head1 = reverse(head1);
    displaylist(head1);
    cout<<endl;
    head2 = reverse(head2);
    displaylist(head2);

    Node* ans = addTwoNumber(head1,head2);
    displaylist(ans);
}