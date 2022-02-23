/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };whyyy
 
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* DummyNode= (struct Listnode *)malloc(sizeof(struct ListNode)) ;
    DummyNode->next=head;
    struct ListNode* fast=DummyNode,*slow=DummyNode;
    
    // if(head->next==NULL && n==1){
    //     head=head->next ;
    // }
    
    for(int i=0 ;i<n ;i++){
        fast=fast->next ;
    }
    
    while(fast->next!=NULL){
        fast=fast->next ;
        slow=slow->next ;
    }
    slow->next=slow->next->next ;
    
    return DummyNode->next ;
}