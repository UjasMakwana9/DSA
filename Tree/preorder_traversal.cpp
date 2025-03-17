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
void preTraversal(vector<int> &v, Node *root)
{
    if (root == NULL)
        return;
    v.push_back(root->data);
    preTraversal(v, root->left);
    preTraversal(v, root->right);
}
vector<int> preOrder(Node *root)
{
    // Your code here
    vector<int> v;
    preTraversal(v, root);
    return v;
}

// Iterative
// Time Complexity O(n)
// Space Complexity O(n)
vector<int> preOrderTraversal(Node *root)
{
    if (root == NULL)
        return {-1};
    stack<Node *> st;
    vector<int> v;
    st.push(root);

    while (!st.empty()) 
    {
        Node *temp = st.top();
        v.push_back(temp->data);

        st.pop();
        if (temp->right != NULL)
            st.push(temp->right);
        if (temp->left != NULL)
            st.push(temp->left);
    }
    return v;
}

// With Optimised Space we keep adding the right node only
vector<int> preOrderTraversal2(Node *root)
{
    if (root == NULL)
        return {-1};
    stack<Node *> st;
    vector<int> v;
    st.push(root);
    Node *curr = root;
    while (!st.empty())
    {
        while (curr != NULL)
        {
            v.push_back(curr->data);
            if (curr->right != NULL)
                st.push(curr->right);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
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

    vector<int> v = preOrderTraversal2(root);
    for (auto &it : v)
    {
        cout << it << " ";
    }
    return 0;
}