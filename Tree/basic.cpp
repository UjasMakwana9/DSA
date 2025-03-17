#include<bits/stdc++.h>
using namespace std;

// Data Structure
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

// Traversal
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

// Height of the Tree
int heightofBinaryTree(Node * root){
    if(root == NULL){
        return 0;
    }
    return max(heightofBinaryTree(root->left), heightofBinaryTree(root->right)) + 1;
}

// Print nodes at a current level
void printCurrentLevel(Node* root, int level) {
    if (root == nullptr)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

// Breadth First Search
// Time Complexity O(n^2)
// Space Complexity O(n)==>Height of the tree (max)
void printLevelOrder(Node* root) {
    int h = heightofBinaryTree(root);
    for (int i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

// Optimal Solution
// Time Complexity : O(n)
// Space Complexity : O(n)
 vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>> v;
        if(root==NULL)
            return v;
            
        queue<Node *>q;
        q.push(root);
        v.push_back({root->data});
        while(q.size()>0)
        {
            Node * curr = q.front();
            q.pop();
            vector<int>temp;
            if(curr->left!=NULL)
            {
                temp.push_back(curr->left->data);
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                temp.push_back(curr->right->data);
                q.push(curr->right);
            }
            v.push_back(temp);
        }
        
        return v;
}

// Get the size of the tree
// Time complexity is O(n)
// Space Complexity is O(h)
int sizeOfTree(Node * root ){
    if(root == NULL)
        return 0;
    else
        return 1+sizeOfTree(root->left)+sizeOfTree(root->right);

}

// Maximum in a binary tree
// Time complexity 
// space complexity
int maxValue(Node * root){
    if(root == NULL)
        return INT_MIN;
    else
        return max(root->data ,max(maxValue(root->left),maxValue(root->right)));
}

int main()
{
    Node * root = new Node(10);
    root->left = new Node(20);
    Node * temp = new Node(30);
    root->right = temp;
    temp->left = new Node(40);
    temp->right = new Node(501);
    temp->right->right = new Node(150);
    cout<<"Inorder Traversal: ";
    inOrder(root);
    cout<<endl<<"Preorder Traversal: ";
    preOrder(root);
    cout<<endl<<"Postorder Traversal: ";
    postOrder(root);
    cout<<endl<<"Height of the Tree: "<<heightofBinaryTree(root);
    cout<<endl<<"Level Order Traversal: ";
    printLevelOrder(root);
    
    cout<<endl<<"Size of the tree:"<<sizeOfTree(root);
    cout<<endl<<"Maximum in the tree:"<<maxValue(root);
    
return 0;
}