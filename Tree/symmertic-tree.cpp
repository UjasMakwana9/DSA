#include<bits/stdc++.h>


using namespace std;

struct TreeNode{
    int val;
    TreeNode * left;
    TreeNode * right;

    TreeNode(int data){
        this->val = data;
        left = NULL;
        right = NULL;
    }
};

// Print the tree in level order
void printLevelOrder(TreeNode * root){
    if(root == NULL)
        return;
    
    queue<TreeNode *> q;
    q.push(root);
    
    while(!q.empty()){
        int sz = q.size();
        for(int i = 0 ; i < sz ; i++){
            TreeNode * temp = q.front();
            cout<<temp->val<<" ";
            q.pop();
            
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
        cout<<endl;
    }
}

void createMirror(TreeNode * temp , TreeNode * root){
    if(root == NULL || temp == NULL)
        return;
    
    if(root->left!=NULL){
        TreeNode * t = new TreeNode(root->left->val); 
        temp->right = t;
    }
    else if(root->left==NULL){
        temp->right = NULL;
    }
    if(root->right!=NULL){
        TreeNode * t = new TreeNode(root->right->val); 
        temp->left = t;
    }
    else if(root->right==NULL){
        temp->left = NULL;
    }
    createMirror(temp->right,root->left);
    createMirror(temp->left,root->right);
}

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == NULL && q == NULL)
        return true;
    else if(p == NULL && q != NULL)
        return false;
    else if(p != NULL && q == NULL)
        return false;
    
    if(p->val == q->val){  
        return isSameTree(p->left,q->left) & isSameTree(p->right,q->right);
    }
    else{
        return false;
    }
}

bool isSymmetric(TreeNode* root) {
    if(root == NULL)
        return false;
    
    TreeNode * temp = new TreeNode(root->val);
    createMirror(temp,root);
    printLevelOrder(temp);
    cout<<endl;
    return isSameTree(temp,root);
}


int main()
{
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);

    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    cout<<isSymmetric(root)<<endl;
    
    return 0;
}
