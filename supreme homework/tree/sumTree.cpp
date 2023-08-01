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

Node *buildTree()
{
    int data;
    cout << "enter the data : " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);
    cout << "enter data for left part: " << endl;
    root->left = buildTree();
    cout << "enter data for right part: " << endl;
    root->right = buildTree();

    return root;
}

int sumTree(Node* &root){
    if(root == NULL){
        return 0;
    }

    int leftans = sumTree(root->left);
    int rightans = sumTree(root->right);
    root->data = leftans + root->data + rightans;

    return root->data;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node* root = buildTree();
    levelOrderTraversal(root);
    sumTree(root);
    levelOrderTraversal(root);


}