class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *tempnode = NULL;
        while (curr)
        {
            tempnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tempnode;
        }
        return prev;
    }
};