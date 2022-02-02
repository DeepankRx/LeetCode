class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
         if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
        }
        ListNode* slow=head;
        //to keep track of previous of slow
        ListNode* prev=NULL;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        return head;
    }
};