class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy =new ListNode(0,head) ;
        ListNode* ptr = dummy ;
        //dummy->next= head;
        
        
        while(head){
            if(head->next && head->val == head->next->val){
                while(head->next && head->val == head->next->val)
                    head=head->next ;
                
                ptr->next=head->next ;
            }
            
            else{
                ptr=ptr->next ;
            }
            
            head=head->next ;
        }
        
        return dummy->next ;
    }
};