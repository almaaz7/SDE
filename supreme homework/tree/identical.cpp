#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


Node* buildTree(){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);

    cout<<"enter the data for left part of "<< data << endl;
    root->left = buildTree();

    cout<<"enter the data for right part of "<<data<<endl;
    root->right = buildTree();

    return root; 
}

bool identical(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }

    if(root1 != NULL && root2 != NULL){
        return (root1->data == root2->data && identical(root1->left,root2->left) && identical(root1->right,root2->right));

    }

    return false;
 

}

int main()
{
    Node* root1 = NULL;
    Node* root2 = NULL;
    cout<<"tree 1"<<endl;
    root1 = buildTree();
    cout<<"tree 2"<<endl;
    root2 = buildTree();

    bool ans = identical(root1,root2);
    if(ans){
        cout<<"identical"<<endl;
    }else{
        cout<<"not identical"<<endl;
    }
}