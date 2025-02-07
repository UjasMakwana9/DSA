#include<bits/stdc++.h>


using namespace std;
class Node {
    public:
    int data;
    Node * left;
    Node * right;
    
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
// Time Coplexity : O(n)
// Space Complexity : O(n)

int heightTree(Node * root , int &diameter)
    {
        if(root == NULL)
            return 0;
        
        int leftHeight = heightTree(root->left,diameter);
        int rightHeight = heightTree(root->right,diameter);
        
        diameter = max(diameter,leftHeight+rightHeight);
        
        return 1 + max(leftHeight,rightHeight);
    }
    
    int diameter(Node* root ) {
        // Your code here
        if(root == NULL)
            return 0;
            
        int diameter = 0;
        heightTree(root,diameter);
        
        return diameter;
    }

int main()
{

return 0;
}