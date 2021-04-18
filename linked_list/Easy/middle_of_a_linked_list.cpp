class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *tempNode = head;
        int no_nodes = 0, midIndex;
        while (tempNode)
        {
            no_nodes++;
            tempNode = tempNode->next;
        }
        midIndex = no_nodes / 2 + 1;
        for (int i = 1; i < midIndex; i++)
        {
            head = head->next;
        }
        return head;
    }
};