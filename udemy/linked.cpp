#include<iostream>
#include<string>
#include<sstream>
using namespace std;

    int remainder(string x)
    {
       // code here
       int currentdigit;
       int rem = 0;
       for(int i=0;i<x.length();i++){
           currentdigit = rem * 10 + (x[i]-'0');
           rem = currentdigit%11;
       }
       return rem;
    
    }

int main()
{
    string str = "231456786543567898765";
    cout<<remainder(str);
}
// struct Node{
//     int data;
//     struct Node* next;
// };
// void display(struct Node* head)
// {
//     struct Node* p = head;
//     if(p==NULL){
//         return;
//     }
//     cout<<p->data<<" ";
//     display(p->next);
// }
// // void display(struct Node* head)
// // {
// //     struct Node* p = head;
// //     while(p!=NULL){
// //         cout<<p->data<<" ";
// //         p=p->next;
// //     }
// // }

// int main()

// {
//     struct Node * head = new Node;
//     struct Node * second = new Node;
//     struct Node * third = new Node;
//     struct Node * tail = new Node;
//     head->data = 10;
//     head->next = second;
//     second->data = 20;
//     second->next = third;
//     third->data = 30;
//     third->next = tail;
//     tail->data = 40;
//     tail->next = NULL;

//     display(head);

    
// }
