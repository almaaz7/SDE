#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree()
{
    int data;
    cout<<"enter the data"<<endl;
    cin>> data;

    if(data == -1 ){
        return NULL;
    }

    Node* root = new Node(data);

    cout<<"enter the data for left part "<<data<<endl;
    root->left = buildTree();

    cout<<"Enter the data for right part "<<data<<endl;
    root->right = buildTree();

    return root;
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int ans = max(leftHeight,rightHeight)+1;
    return ans;
}

int diameter(Node* root){
    if(root == NULL){
        return 0;
    }
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right);
    int ans = max(op1,max(op2,op3));
    return ans;
}

int main()
{
    Node* root = NULL;
    root = buildTree();

    int d = diameter(root);
    cout<<"diameter is "<<d<<endl;
}