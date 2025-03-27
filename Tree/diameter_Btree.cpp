#include<bits/stdc++.h>


using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};




// Time Complexity = O(n)
// Space Complexity = O(Height of the tree)
int diameter(Node* root ,int &height){
    if(root==NULL)
        return -1;
    
    int lh = diameter(root->left,height);
    int rh = diameter(root->right,height);

    height = max(height, lh+rh);
    return max(lh,rh)+1;
}
int diameterOfBinaryTree(Node* root) {
    if(root==NULL || (root->left==NULL) && (root->right==NULL))
        return 0;
    int height = 1;
    int val = diameter(root,height);
    return height;
}
int main()
{

return 0;
}