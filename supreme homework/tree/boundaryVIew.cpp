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
    if(data==-1){
        return NULL;
    }
    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void printleftboundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }
    cout<<root->data<<" ";
    if(root->left){
        printleftboundary(root->left);
    }else{
        printleftboundary(root->right);
    }
}

void printleafboundary(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        cout<<root->data<<" ";
    }

    printleafboundary(root->left);
    printleafboundary(root->right);
}

void printrightboundary(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }

    if(root->right){
        printrightboundary(root->right);
    }else{
        printrightboundary(root->left);
    }
    cout<<root->data<<" ";
}

void boundaryView(Node* root){
    if(root== NULL){
        return;
    }
    cout<<root->data<<" ";
    printleftboundary(root->left);
    printleafboundary(root);
    printrightboundary(root->right);
}

int main(){
    Node* root = buildTree();
    boundaryView(root);
}