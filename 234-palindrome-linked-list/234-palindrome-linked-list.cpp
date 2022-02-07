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
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head,*prev=NULL,*temp;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }
        slow = (fast ? slow -> next : slow);  //for odd length
        while(slow) // check if linked lists starting at prev and slow are equal
		if(slow -> val != prev -> val) return false;
		else slow = slow -> next, prev = prev -> next;
	return true;
    }
};