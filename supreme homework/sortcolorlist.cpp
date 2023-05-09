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

void print(Node* head){
    while(head!= NULL){
        cout<<head->data<< " ";
        head = head->next;
    }
    cout<<endl;
}

Node* sort2(Node* &head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    while(curr!= NULL){
        if(curr->data == 0){
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            zeroTail->next = temp;
            zeroTail = temp;

        }
        else if(curr->data == 1){
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            oneTail->next = temp;
            oneTail = temp;

        }
        else if(curr->data == 2){
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            twoTail->next = temp;
            twoTail = temp;

        }
    }

    Node* temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    if(oneHead != NULL){
        zeroTail->next = oneHead;
        if(twoHead != NULL){
            oneTail->next = twoHead;
        }
    }else{
        if(twoHead != NULL){
            zeroTail->next = twoHead;
        }
    }

    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    return zeroHead;
}

// void sort(Node* &head)
// {
//     int zero = 0;
//     int one = 0;
//     int two = 0;

//     Node* temp = head;

//     while(temp != NULL){
//         if(temp->data == 0){
//             zero++;
//         }
//         if(temp->data == 1){
//             one++;
//         }
//         if(temp->data == 2){
//             two++;
//         }
//         temp = temp->next;
//     }

//     temp = head;
    
//         while(zero--){
//             temp->data = 0;
//             temp = temp->next;
//         }
//         while(one--){
//             temp->data = 1;
//             temp=temp->next;
//         }
//         while(two--){
//             temp->data = 2;
//             temp = temp->next;
//         }
    
// }

int main()
{
    Node* first = new Node(1);
    Node* second = new Node(0);
    Node* third = new Node(2);
    Node* fourth = new Node(1);
    Node* fifth = new Node(0);
    Node* sixth = new Node(2);
    Node* seventh = new Node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    Node* head = first;
    print(head);
    // sort(head);
    head = sort2(head);
    print(head);
}