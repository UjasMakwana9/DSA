#include<bits/stdc++.h>


using namespace std;
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
// Brute Force
// Time Complexity : O(N)
// Space Complexity : O(N)
    Node* insertAtHead (struct Node* head , int value)
    {
        Node* n = new Node(value);
        n->next = head;
        
        head = n;
        return head;
    }
    Node* reverseList(struct Node* head) {
        // code here
        Node * ll2 = new Node(head->data);
        
        Node* ptrl = head->next;
        
        while(ptrl!=NULL)
        {
            ll2 = insertAtHead(ll2,ptrl->data);
            ptrl = ptrl->next;
        }
        
        
        return ll2;
    }

//   Time Complexity : O(N)
// Space Complexity : O(1)

    Node* reverseListIterative(struct Node* head) {
        // code here
        Node * temp = head;
        
        Node* pre = NULL;
        
        while(temp!=NULL)
        {
            Node *after = temp -> next;
            
            temp -> next = pre;
            
            pre = temp;
            
            temp = after;
        }
        
        
        return pre;
    }

// Time Complexity : O(N)
// Space Complexity : O(1)
Node* reverseListRecursive(struct Node* head) {
        // code here
        if(head->next == NULL)
        {
            return head;
        }
        
        Node* ptr = reverseList(head->next);
        
        Node * front = head->next;
        
        front->next = head;
        
        head -> next = NULL;
        
        return ptr;
    }
int main()
{

return 0;
}