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

Node* buildTree()
{
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);

    cout<<"enter the data for left part of "<< data<<endl;
    root->left = buildTree();

    cout<<"enter the data for right part of "<< data<<endl;
    root->right = buildTree();

    return root; 
}
void preOrder(Node* root)
{
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int height(Node* root)
{
    if(root == NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight,rightHeight)+1;
    return ans;
}
int main()
{
    Node* root = NULL;
    root = buildTree();
    preOrder(root);

    int h = height(root);
    cout<<"height of the tree is "<<h<<endl;
}