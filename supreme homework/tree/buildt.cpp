#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node()
    {
        this->data = 0;
        this->left = NULL;
        this->right = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void printTree(Node *root)
{
    Node *temp = root;
    if (temp->data == -1)
        return;
    cout << temp->data;
    printTree(temp->left);
    printTree(temp->right);
}

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

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight,rightHeight)+1;
    return ans;
}

int diameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right);
    int ans = max(op1,max(op2,op3));
    return ans;
}

void inOrder(Node* root)
{
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(Node* root)
{
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node* root)
{
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
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
    Node *root = NULL;

    root = buildTree();
    // printTree(root);

    levelOrderTraversal(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    cout<<height(root)<<endl;
    cout<<diameter(root)<<endl;
}
