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


// Optimal Time with more space Solution
// Time complexity O(n)
// Space complexity O(2n)

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    if(root == NULL)
        return {};
    
    deque<TreeNode *> dq;
    dq.push_back(root);
    int level = 1;
    vector<vector<int>>vec;
    vec.push_back({root->val});

    while(!dq.empty()){
        int sz = dq.size();
        vector<int>v;
        queue<TreeNode *> q;
        for(int i = 0 ; i < sz ; i++ ){

            TreeNode * temp = dq.back();
            dq.pop_back();
            if(level%2==0){
                    if(temp->left!=NULL) {
                        v.push_back(temp->left->val);
                        q.push(temp->left);
                    } 
                    if(temp->right!=NULL){
                        v.push_back(temp->right->val);
                        q.push(temp->right);
                    } 
                    if(temp->left!=NULL) {
                    } 
            }
            else{
                    if(temp->right!=NULL) {
                        v.push_back(temp->right->val);
                        q.push(temp->right);
                    } 
                    if(temp->left!=NULL){
                        v.push_back(temp->left->val);
                        q.push(temp->left);
                    } 
            }
        }
        if(v.size()>0)
            vec.push_back(v);
        while(!q.empty()){
            dq.push_back(q.front());
            q.pop();
        }
        level++;
    }
    return vec;
    
}