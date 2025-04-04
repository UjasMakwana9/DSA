#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
// Time Complexity : O(n)
// Space Complexity : O(n)
void inTraversal(vector<int> &v, Node *root)
{
    if (root == NULL)
        return;
    inTraversal(v, root->left);
    v.push_back(root->data);
    inTraversal(v, root->right);
}
vector<int> inOrder(Node *root)
{
    // Your code here
    vector<int> v;
    inTraversal(v, root);
    return v;
}

// Important Part
// Iterative
// Time Complexity O(n)
// Space Complexity O(n)
vector<int> inOrderTraversal(Node *root)
{
    if (root == NULL)
        return {-1};
    stack<Node *> st;
    vector<int> v;
    
    Node * curr = root;

    while( curr!=NULL || !st.empty()){
        while(curr!=NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top(); st.pop();
        v.push_back(curr->data);
        curr = curr->right;
    }
    return v;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);
    // root->left->right->left = new Node(60);
    // root->right->left = new Node(70);
    // root->right->right = new Node(80);

    vector<int> v = inOrderTraversal(root);
    for (auto &it : v)
    {
        cout << it << " ";
    }
    return 0;
}