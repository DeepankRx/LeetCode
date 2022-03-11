                                                                                                                                        /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    int listSize(ListNode *head )
    {
        int count = 0;
        ListNode *p = head;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        return count;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
         int size = listSize(head);
        if(k==0 || k==size)
            return head;
       
        ListNode *ptr = head;
        ListNode *last = head;
        
        while(last->next!=NULL)
            last = last -> next;
        
        cout<<last->val<<" ";
        
        last -> next = head;
        
        
          cout<<last->next->val<<" ";
        ListNode *first = last ;
        int len = size - ( k % size) ;
       for(int i =0 ;i<len && ptr->next!=NULL;i++)
        {
            ptr = ptr ->next;
        }
      
       cout<<ptr->val;
      
        head = ptr ;
        ListNode * p = head;
        while(p->next != head)
            p = p->next ;
        p -> next =NULL;
        return head;
    }
};