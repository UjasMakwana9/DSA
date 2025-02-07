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
// Time Complexity : O(n)
// Space Complexity : O(height of the tree)
void mirror(Node* node) {
        // code here
        if(node==NULL)
            return;
        
        Node * temp = node->right;
        node->right = node->left;
        node->left = temp;
        
        mirror(node->left);
        mirror(node->right);
    }
int main()
{

return 0;
}