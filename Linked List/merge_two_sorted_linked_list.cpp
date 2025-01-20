#include<bits/stdc++.h>


using namespace std;
// Time Complexity = O(N)
// Space Complexity = O(1)
struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node * ptr1 = head1;
        Node * ptr2 = head2;
        Node * pre = NULL;
        
        while(ptr1!=NULL && ptr2!=NULL)
        {
            
            if(ptr1->data >= ptr2->data)
            {
                Node * temp = ptr2;
                ptr2 = ptr2->next;
                temp->next = ptr1;
                if(pre==NULL)
                {
                    pre = temp;
                    head1 = pre;
                }
                else
                {
                    pre->next = temp;
                    pre = pre -> next;
                }
            }
            else
            {
                pre = ptr1;
                ptr1 = ptr1->next;
            }
        }
        
        if(ptr2!=NULL)
        {
            pre->next = ptr2;
        }
        
        return  head1;
        
    }  
int main()
{

return 0;
}