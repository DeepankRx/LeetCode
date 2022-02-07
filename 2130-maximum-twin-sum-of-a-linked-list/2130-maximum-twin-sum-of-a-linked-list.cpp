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
    ListNode *reverseFromHalf(ListNode *head)
    {
    ListNode* slow = head;
	ListNode* fast = head;


	// Get middle of linked list
	while(fast && fast -> next)
	{
		fast = fast -> next -> next;
		slow = slow -> next;
	}

	// Reverse second part of linked list
	ListNode *nextNode, *prev = NULL;
	while (slow) {
		nextNode = slow->next;
		slow->next = prev;
		prev = slow;
		slow = nextNode;
	}    
    return prev;
    }
    int pairSum(ListNode* head) {
       ListNode *start=head,*mid;
        mid=reverseFromHalf(head);
        int maxVal=0;
        while(mid)
        {
            
            maxVal = max(maxVal, head -> val + mid -> val);
            head=head->next;
            mid=mid->next;
            
        }
        return maxVal;
    }
};