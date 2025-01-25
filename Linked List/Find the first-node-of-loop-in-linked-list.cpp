#include<bits/stdc++.h>


using namespace std;
struct Node {
    int data;
    struct Node* next;
    struct Node* random;
    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
// Time Complexity O(n)
// Space Complexity O(n)
Node* findFirstNode(Node* head) {
        // your code here
        unordered_set<Node*>us;
        Node * ptr = head;
        while(ptr!=NULL)
        {
            if(us.find(ptr)!=us.end())
            {
                return ptr;
            }
            us.insert(ptr);
            ptr=ptr->next;
        }
        return NULL;
    }

int main()
{

return 0;
}