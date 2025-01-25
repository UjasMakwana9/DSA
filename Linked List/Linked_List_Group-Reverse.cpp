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
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if (head == NULL)
            return head;
            
        Node *curr = head;
        Node * newHead = NULL;
        Node * tail = NULL;
        
        while(curr!=NULL)
        {
            Node * groupHead = curr;
            Node * prev = NULL;
            Node * nextNode = NULL;
            
            int count = 0;
            
            while(curr!=NULL && count<k)
            {
                nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
                count++;
            }
            
            if(newHead == NULL)
            {
                newHead = prev;
            }
            
            if(tail!= NULL)
            {
                tail->next = prev;
            }
            
            tail = groupHead;
        }
        return newHead;
    }
int main()
{

return 0;
}