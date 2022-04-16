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
     ListNode* vectorToList(vector<int>& nums) {
        ListNode* head = new ListNode(nums[0]);
        ListNode* curr = head;
        for(int i = 1; i < nums.size(); i++) {
        curr->next = new ListNode(nums[i]);
        curr = curr->next;
        }
        return head;
    }
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *ptr = head;
        vector<int> vec;
        ListNode *ans;
        int sum = 0;
        ptr = ptr->next;
        while(ptr!=nullptr)
        {
            if(ptr->val==0)
            {
                vec.push_back(sum);
                sum = 0;
            }
            else
            {
                sum+=ptr->val;
            }
            ptr = ptr -> next;
        }
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec.at(i)<<" ";
        }
        ans = vectorToList(vec);
        return ans;
    }
};