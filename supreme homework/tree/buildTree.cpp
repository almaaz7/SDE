#include<iostream>
#include<queue>
#include<stack>
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

void levelOrederTraversal(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<< temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inOrder(Node* root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

void preOrder(Node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(Node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

void iterativepreorder(Node* root){
    stack<Node*> s;
    
    while(root!= NULL || !s.empty()){
        if(root != NULL){
            cout<<root->data<<" ";
            s.push(root);
            root = root->left;
        }
        else{
            root = s.top();
            s.pop();
            root = root->right;
        }
    }
}

void printTree(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    Node* root = NULL;

    root = buildTree();

    // printTree(root);

    levelOrederTraversal(root);
    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    iterativepreorder(root);
    
}