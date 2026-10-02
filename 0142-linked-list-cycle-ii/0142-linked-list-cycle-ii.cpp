/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
        return head;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                ListNode*n=head;
                while(n!=slow)
                {
                    slow=slow->next;
                    n=n->next;
                }
                return n;
            }
        }
        return NULL;

        
    }
};