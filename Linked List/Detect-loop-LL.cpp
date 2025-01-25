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

// Time Complexity : O(N)
// Space Complexity : O(N)
bool detectLoop(Node* head) {
        // your code here
        if (head==NULL)
            return false;
        Node * ptr = head;
        unordered_map<int,Node *>um;
        um[head->data]=head;
        
        while(ptr->next!=NULL)
        {
            if(um[ptr->next->data]==ptr->next)
            {
                return true;
            }
            um[ptr->data]=ptr;
            // cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        return false;
    }
// Time Complexity : O(N)
// Space Complexity : O(1)
    bool detectLoop2(Node* head) {
        // your code here
        if (head==NULL)
            return false;
        Node * slow = head;
        Node * fast = head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow)
            {
                return true;
            }
        }
        return false;
    }

int main()
{

return 0;
}