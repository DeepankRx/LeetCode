int size(struct ListNode *head)
{
    struct ListNode *p;
    p=head;
    int n=0;
    while(p!=NULL)
    {
        p=p->next;
        n++;
    }
    return n;
}
struct ListNode *deleteFirstNode(struct ListNode *head)
{
    struct ListNode *temp;
    temp=head;
    head=head->next;
    free(temp);
    return head;
}
struct ListNode* middleNode(struct ListNode* head){
 int n=size(head),middle;
    
    if(n%2==0)
    {
        middle=n/2 ;
}
    else
    {
        middle=(n-1)/2;
    }
    for(int i=0;i<middle;i++)
    {
        head=deleteFirstNode(head);
    }
    return head;
}