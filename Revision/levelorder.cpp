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
        left =NULL;
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
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

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
            cout<<temp->data;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int heightoftree(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftheight = heightoftree(root->left);
    int rightheight = heightoftree(root->right);
    int ans = max(leftheight,rightheight) + 1;

    return ans;
}

int diameteroftree(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftans = diameteroftree(root->left);
    int rightans = diameteroftree(root->right);
    int ans3 = heightoftree(root->left) + heightoftree(root->right);

    int ans = max(leftans,max(rightans,ans3));

    return ans;
}

int main()
{
    Node* root = buildTree();
    levelOrderTraversal(root);
    cout<<"height is: "<<heightoftree(root)-1<<endl;
    cout<<"diameter is: "<<diameteroftree(root);
}