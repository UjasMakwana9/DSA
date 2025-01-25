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

// Time Complexity O(n)
// Space Complexity O(n)
void removeLoop(Node* head) {
        // code here
        unordered_set<Node *>us;
        Node * ptr = head;
        Node * pre = NULL;
        while(ptr!=NULL)
        {
            if(us.find(ptr)!=us.end())
            {
                pre->next = NULL;
                return;
            }
            us.insert(ptr);
            pre = ptr;
            ptr = ptr->next;
        }
        return ;
    }

// Time Complexity O(n)
// Space Complexity O(1)
void removeLoop(Node* head) {
        // code here
        Node * slow = head;
        Node * fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            Node * pre = fast;
            fast = fast ->next ->next;
            if(slow == fast)
            {
                if(slow==head)
                {
                    pre->next->next = NULL;
                    return ;
                }
                slow = head;
                Node * prev = NULL;
                while(slow!=fast)
                {
                    prev = fast;
                    slow = slow->next;
                    fast = fast->next;
                }
                prev ->next = NULL;
                return ;
            }
        }
        return ;
    }
int main()
{

return 0;
}