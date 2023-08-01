#include<iostream>
#include<queue>
#include<vector>
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

int findpos(int inorder[],int size,int element){
    for(int i=0;i<size;i++){
        if(inorder[i]==element){
            return i;
        }
    }
    return -1;
}


Node* buildTreeInorderPreorder(int inorder[],int preorder[],int size,int& preindex,int inorderstart,int inorderend)
{
    //base case
    if(preindex >= size || inorderstart > inorderend){
        return NULL;
    }

    int element = preorder[preindex++];
    int pos = findpos(inorder,size,element);
    Node* root = new Node(element);

    root->left = buildTreeInorderPreorder(inorder,preorder,size,preindex,inorderstart,pos-1);
    root->right = buildTreeInorderPreorder(inorder,preorder,size,preindex,pos+1,inorderend);
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

int main()
{
    int preorder[] = {10,20,30,40,50};
    int inorder[] = {20,10,40,30,50};
    int size = 5;
    int preindex = 0;
    int inorderstart = 0;
    int inorderend = size - 1;
    Node* root = buildTreeInorderPreorder(inorder,preorder,size,preindex,inorderstart,inorderend);

    levelOrederTraversal(root);
}