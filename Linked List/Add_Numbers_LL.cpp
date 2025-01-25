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

Node * reverse(Node * head , bool flag)
  {
      while(head!=NULL && head->data == 0 && flag)
      {
          head = head->next;
      }
      Node * ptr = head;
      Node * pre = NULL;
      while(ptr!=NULL)
      {
          Node * frontOne = ptr->next;
          ptr->next = pre;
          pre = ptr;
          ptr = frontOne;
      }
      return pre;
  }
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        if(num1 == NULL)
            return num2;
        else if(num2==NULL)
            return num1;
        
        Node * num1r = reverse(num1,true);
        Node * num2r = reverse(num2,true);
        
        Node * ptr1 = num1r; 
        Node * ptr2 = num2r; 
        Node * pre = NULL;
        int carry = 0;
        while(ptr1!=NULL && ptr2!=NULL)
        {
            pre = ptr1;
            int sum = ptr1->data+ptr2->data+carry;
            carry = sum/10;
            ptr1->data = sum%10;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        while(ptr1!=NULL)
        {
            pre = ptr1;
            int sum = ptr1->data + carry;
            ptr1->data = sum%10;
            carry = sum/10;
            ptr1 = ptr1->next;
        }
        while(ptr2!=NULL)
        {
            Node * n = new Node(ptr2->data);
            int sum = ptr2->data + carry;
            n->data = sum%10;
            carry = sum/10;
            pre->next = n;
            pre = pre->next;
            ptr2=ptr2->next;
        }
        if(carry != 0)
        {
            Node * n = new Node(carry);
            pre -> next = n;
        }
       
        return reverse(num1r,false);
    }

int main()
{

return 0;
}