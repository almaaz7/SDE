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

Node* removeLoop(Node* head){
    if(head == NULL){
        cout<<"ll empty";
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow){
            slow = head;
            break;
        }
    }
    Node* prev = fast;
    while(slow != fast){
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;

    return slow;

}

Node* startingLoop(Node* head){
    if(head == NULL){
        cout<<"ll empty";
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow){
            slow = head;
            break;
        }
    }
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    return slow;

}

bool circular(Node* head){
    if(head == NULL){
        cout<<"ll empty";
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow){
            return true;
        }
    }
    return false;

}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eigth = new Node(80);
    Node* ninth = new Node(90);
    Node* tenth = new Node(100);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eigth;
    eigth->next = ninth;
    ninth->next = fifth;
    Node* head = first;

    cout<<"loop check "<<circular(head)<<endl;
    cout<<"starting point of loop "<<startingLoop(head)->data<<endl;
    removeLoop(head);
    print(head);


}