class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int n=0;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *curr=slow;
        ListNode *prev=NULL;
        while(curr){
            ListNode* temp1=prev;
            prev=curr;
            ListNode* temp2=curr->next;
            curr->next=temp1;
            curr=temp2;    
        }
        while(prev){
            if(head->val!=prev->val)
                    return false;
            prev=prev->next;
            head=head->next;
        }
        return true;    
    }
};