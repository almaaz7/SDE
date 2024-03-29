#include<iostream>
#include<queue>
#include<map>
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
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void levelordertraversal(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<temp->data<<endl;

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

void bottomView(Node* root){
    if(root == NULL){
        return;
    }

    map<int,int> m;

    queue<pair<Node*, int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*, int> temp = q.front();
        q.pop();
        Node* frontNode = temp.first;
        int hd = temp.second;

        m[hd] = frontNode->data;

        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i:m){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}

int main(){
    Node* root = buildTree();
    levelordertraversal(root);
    bottomView(root);
}