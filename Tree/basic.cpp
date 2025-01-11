#include<bits/stdc++.h>


using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
void inOrder(Node * root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node * root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node * root){
    if(root == NULL){
        return;
    }
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node * root = new Node(10);
    root->left = new Node(20);
    Node * temp = new Node(30);
    root->right = temp;
    temp->left = new Node(40);
    temp->right = new Node(50);
    cout<<"Inorder Traversal: ";
    inOrder(root);
    cout<<endl<<"Preorder Traversal: ";
    preOrder(root);
    cout<<endl<<"Postorder Traversal: ";
    postOrder(root);
return 0;
}