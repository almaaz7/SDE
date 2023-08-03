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

void rightview(Node* root, vector<int>& ans, int level){
    if(root == NULL){
        return;
    }

    if(level == ans.size()){
        ans.push_back(root->data);
    }

    
    rightview(root->right,ans,level+1);
    rightview(root->left,ans,level+1);
}

int main(){
    Node* root = buildtree();
    vector<int> ans;
    rightview(root,ans,0);
    for(auto i:ans){
        cout<<i<<" ";
    }
}