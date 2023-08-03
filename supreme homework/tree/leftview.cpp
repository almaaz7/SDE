#include<iostream>
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

Node* buildtree(){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node( data);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}

void leftView(Node* root, vector<int>& ans, int level){
    if(root == NULL){
        return;
    }

    if(level == ans.size()){
        ans.push_back(root->data);
    }

    leftView(root->left,ans,level+1);
    leftView(root->right,ans,level+1);
}

int main(){
    Node* root = buildtree();
    vector<int> ans;
    leftView(root,ans,0);
    for(auto i:ans){
        cout<<i<<" ";
    }
}