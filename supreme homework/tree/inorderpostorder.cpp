#include<iostream>
#include<queue>
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

Node* postorderinorder(int postorder[],int inorder[],int size,int& postIndex,int instart,int inend){
    if(postIndex < 0 || instart > inend){
        return NULL;
    }

    int element = postorder[postIndex--];
    Node* root = new Node(element);
    int pos = findpos(inorder,size,element);

    root->right = postorderinorder(postorder,inorder,size,postIndex,pos+1,inend);
    root->left = postorderinorder(postorder,inorder,size,postIndex,instart,pos-1);

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
    int postorder[] = {40,20,50,60,30,10};
    int inorder[] = {40,20,10,50,30,60};
    int size = 6;
    int postindex = size-1;
    int inorderstart = 0;
    int inorderend = size - 1;
    Node* root = postorderinorder(postorder,inorder,size,postindex,inorderstart,inorderend);

    levelOrederTraversal(root);
}