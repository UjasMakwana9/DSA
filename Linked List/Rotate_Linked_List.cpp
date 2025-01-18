#include<bits/stdc++.h>


using namespace std;
struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

// Time Complexity : O(N)
// Space Complexity : O(1)
    Node* rotate(Node* head, int k) {
        // Your code here
        Node * ptr = head;
        int length = 0;
        while(ptr!=NULL)
        {
            ptr = ptr->next;
            length++;
        }
        int cnt = k%length;
        if(cnt==0 || length==1)
            return head;
        
        
        Node * curr = head;
        Node * pre = NULL;
        while(cnt--)
        {
            pre = curr;
            curr=curr->next;
        }
        pre->next = NULL;
        Node * ptr2 = curr;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next = head;
        
        return ptr2;
    }

int main()
{

return 0;
}