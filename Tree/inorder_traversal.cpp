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
// Time Complexity : O(n)
// Space Complexity : O(n)
void inTraversal(vector<int>&v,Node * root)
    {
        if(root==NULL)
            return;
        
        inTraversal(v,root->left);
        if(root->left == NULL && root->right==NULL){
            v.push_back(root->data);
            return;
        }
        v.push_back(root->data);
        inTraversal(v,root->right);
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(root->data);
            return;
        }
        
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>v;
        inTraversal(v,root);
        return v;
    }
int main()
{

return 0;
}