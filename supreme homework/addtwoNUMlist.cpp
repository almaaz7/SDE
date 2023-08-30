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

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* &head){
    Node* curr = head;
    Node* prev = NULL;

    while(curr!= NULL){
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

Node* solve(Node* &head1,Node* &head2){
    Node* dummy = new Node();
    Node* temp = dummy;
    int carry = 0;
    while(head1!= NULL || head2 != NULL || carry){
        int sum = 0;
        if(head1 != NULL){
            sum = sum + head1->data;
            head1 = head1->next;
        }
        if(head2 != NULL){
            sum = sum + head2->data;
            head2 = head2->next;
        }

        sum = sum + carry;
        carry = sum / 10;
        int digit = sum%10;
        Node* newNode = new Node(digit);
        temp->next = newNode;
        temp = newNode;
    }
    return dummy->next;
}

// Node* solve(Node* &head1, Node* &head2){
//     head1 = reverse(head1);
//     head2 = reverse(head2);
//     int carry = 0;
//     Node* ansHead = NULL;
//     Node* ansTail = NULL;
//     while(head1 != NULL && head2 != NULL){
//         int sum = carry + head1->data + head2->data;
//         int digit = sum % 10;
//         carry = sum / 10;

//         Node* newNode = new Node(digit);
//         if(ansHead == NULL){
//             ansHead = newNode;
//             ansTail = newNode;
//         }else{
//             ansTail->next = newNode;
//             ansTail = newNode;
//         }

//         head1 = head1->next;head2 = head2->next;
//     }

//     while(head1 != NULL){
//         int sum = carry + head1->data;
//         int digit = sum % 10;
//         carry = sum / 10;

//         Node* newNode = new Node(digit);
//         ansTail->next = newNode;
//         ansTail = newNode;
//         head1 = head1->next;
//     }

//     while(head2 != NULL){
//         int sum = carry + head2->data;
//         int digit = sum % 10;
//         carry = sum / 10;

//         Node* newNode = new Node(digit);
//         ansTail->next = newNode;
//         ansTail = newNode;
//         head2 = head2->next;
//     }

//     while(carry != 0){
//         int sum = carry;
//         int digit = sum % 10;
//         carry = sum / 10;

//         Node* newNode = new Node(digit);
//         ansTail->next = newNode;
//         ansTail = newNode;

//     } 

//     ansHead = reverse(ansHead);
//     return ansHead;   
// }

int main()
{
    Node* head1 = new Node(9);
    Node* second1 = new Node(2);
    head1->next = second1;

    Node* head2 = new Node(9);
    Node* second2 = new Node(9);
    head2->next = second2;

    Node* ans = solve(head1,head2);
    print(ans);
    
}