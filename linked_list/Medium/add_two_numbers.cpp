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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int last = 0, sum = 0;
        ListNode *l = new ListNode();
        ListNode *prev = l;
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        while (temp1 != NULL || temp2 != NULL)
        {
            ListNode *temp = new ListNode();
            if (temp1 == NULL)
            {
                sum = last + temp2->val;
                temp2 = temp2->next;
            }
            else if (temp2 == NULL)
            {
                sum = last + temp1->val;
                temp1 = temp1->next;
            }
            else
            {
                sum = last + temp1->val + temp2->val;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            temp->val = sum % 10;
            last = sum / 10;
            prev->next = temp;
            prev = temp;
            temp->next = NULL;
        }
        if (last)
        {
            ListNode *temp = new ListNode();
            temp->val = last;
            prev->next = temp;
            temp->next = NULL;
        }

        return l->next;
    }
};
