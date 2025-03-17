#include<bits/stdc++.h>


using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

void printKthLevel(Node * root, int k, int current = 1){
    if(root == NULL){
        // cout<<root->data;
        return;
    }
    if(current == k){
        cout<<root->data<<" ";
        return;
    }
    // cout<<root->data<<" ";
    printKthLevel(root->left,k,current+1);

    printKthLevel(root->right,k,current+1);

}

int main()
{
    Node * root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    root->left->right->left = new Node(90);
    root->right->right->left = new Node(80);
    root->right->right->left->right = new Node(800);

    int k;
    cout<<"Enter the Kth level of the tree:";
    cin>>k;
    printKthLevel(root,k);
return 0;
}