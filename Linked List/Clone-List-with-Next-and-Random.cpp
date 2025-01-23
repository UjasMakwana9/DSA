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
// Time Complexity O(n^2)
// Space Complexity O(n*2)  
Node *cloneLinkedList(Node *head) {
        // Write your code here
        // Time Complexity O(n^2)
        // Space Complexity O(n*2)
        vector<vector<int>>hsh;
        Node * head2 = NULL;
        Node * ptr = head;
        Node * pre = NULL;
        
        while(ptr!=NULL)
        {
            if(ptr->random!=NULL){
                Node * temp = head;
                int cnt = 1;
                while(temp != ptr->random)
                {
                    cnt++;
                    temp=temp->next;
                }
                hsh.push_back({ptr->data,cnt});
        
            }
            else
            {
                
                hsh.push_back({ptr->data,-1});
            }
            
            Node * temp = new Node(ptr->data);
            if(pre==NULL)
            {
                pre = temp;
                head2 = pre;
            }
            else
            {
                pre->next = temp;
                pre=pre->next;
            }
            ptr=ptr->next;
        }
        
        Node * ptr2 = head2;
        int k = 0;
        while(ptr2!=NULL)
        {
            if(hsh[k][1]==-1)
            {
                ptr2->random = NULL;
            }
            else
            {
                int temp = hsh[k][1];
                Node * itr = head2;
                while(temp!=1)
                {
                    itr=itr->next;
                    temp--;
                }
                ptr2->random = itr;
            }
            k++;
            ptr2=ptr2->next;
        }
        
        return head2;
    }

// Time Complexity O(n)
// Space Complexity O(n)
Node* copyRandomList(Node* head) {
        map<Node*, Node*> m;

        Node* p = head;
        while(p) {
            m[p] = new Node(p->data);
            p = p->next;
        }

        for(auto n: m)  {
            n.second->next = m[n.first->next];
            n.second->random = m[n.first->random];
        }

        return m[head];
    }
   Node* copyRandomList2(Node* head) {
        std::unordered_map<Node*, Node*> hashMap;
        Node* cur = head;

        while (cur) {
            hashMap[cur] = new Node(cur->data);
            cur = cur->next;
        }

        cur = head;

        while (cur) {
            Node* copy = hashMap[cur];
            copy->next = hashMap[cur->next];
            copy->random = hashMap[cur->random];
            cur = cur->next;
        }

        return hashMap[head];        
    
    }
int main()
{

return 0;
}