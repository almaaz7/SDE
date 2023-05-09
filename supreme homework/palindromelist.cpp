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
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    while( curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}
bool isPalindrome(Node* head)
{
    if(head == NULL){
        cout<<"ll empty"<<endl;
        return NULL;
    }

    if(head->next ==NULL){
        return true;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    
    Node* reverseHead = reverse(slow->next);

    slow->next = reverseHead;

    Node* temp1 = head;
    Node* temp2 = reverseHead;

    while(temp2 != NULL){
        if(temp1->data != temp2->data){
            return false;
        }else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    return true;


}



int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(50);
    Node* seventh = new Node(70);
    Node* eigth = new Node(30);
    Node* ninth = new Node(20);
    Node* tenth = new Node(10);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eigth;
    eigth->next = ninth;
    ninth->next = tenth;
    Node* head = first;

    print(head);


    if(isPalindrome(head)){
        cout<<"Valid palindrome"<<endl;
    }else{
        cout<<"not a valid  palindrome"<<endl;
    }
}