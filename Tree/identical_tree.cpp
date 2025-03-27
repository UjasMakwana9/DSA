#include<bits/stdc++.h>


using namespace std;

struct TreeNode{
    int data;
    TreeNode * left;
    TreeNode * right;

    TreeNode(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Time Complexity O(n)
// Space Complexity O(H)
bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == NULL && q == NULL)
        return true;
    else if(p == NULL && q != NULL)
        return false;
    else if(p != NULL && q == NULL)
        return false;

    
    if(p->data == q->data){  
        return isSameTree(p->left,q->left) & isSameTree(p->right,q->right);
    }
    else{
        return false;
    }
}

int main()
{

return 0;
}