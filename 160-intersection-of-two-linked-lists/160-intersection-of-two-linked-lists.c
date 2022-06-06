struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    struct ListNode *listA = headA;
    struct ListNode *listB = headB;

    if (listA == NULL || listB == NULL)
        return NULL;
    while (listA != listB)
    {
        if (listA != NULL)
        {
            listA=listA->next;
        }
        else
        {
            listA=headB;
        }
        if (listB != NULL)
        {
            listB=listB->next;
        }
        else
        {
            listB=headA;
        }
        // listA = listA==NULL ? headB:listA->next;
        // listB = listB==NULL ? headA : listB->next;
    }

    return listA;
}