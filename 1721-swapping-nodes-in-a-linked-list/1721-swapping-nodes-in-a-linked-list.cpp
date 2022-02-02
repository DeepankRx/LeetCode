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
    void swap(int pos1,int pos2,vector<int> &vec)
    {
        int temp=vec[pos1];
        vec[pos1]=vec[pos2];
        vec[pos2]=temp;
    }
    ListNode* swapNodes(ListNode* head, int k) {
    ListNode *p=head;
        ListNode *p2=head;
    vector<int> arr;
        int count=0;
        while(p)
        {
            arr.push_back(p->val);
            p=p->next;
            count++;
        }
        swap(k-1,count-k,arr);
        int i=0;
    while(p2)
    {
        p2->val=arr[i];
        p2=p2->next;
        i++;
    }
        return head;
    }
};