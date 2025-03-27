#include<bits/stdc++.h>


using namespace std;

// Space Complexity in case od skewed tree is O(n)

// Brute force Solution
// Time complexity = O(n^2)
// Space Complexity = O(H)

// check if root id null return true
// Find Height at every node 
// Check the Difference if > 1 --> return false
// move to the left tree
// move to the right tree 
// return the AND of left tree & right tree value 

// Optimal Solution
// Time complexity = O(n)
// Space Complexity = O(H)
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

int maxDepth(Node* root) {
    if(root==NULL)
        return 0;
    
    int lHeight = maxDepth(root->left);
    if(lHeight == -1) return -1;
    int rHeight = maxDepth(root->right);
    if(rHeight == -1) return -1;
    if(abs(lHeight-rHeight)>1) return -1;
    
    return max(lHeight,rHeight)+1;
}

bool isBalanced(Node* root) {
    int val = maxDepth(root);
    if(val == -1)
        return false;
    return true;
}

int main()
{
    
return 0;
}