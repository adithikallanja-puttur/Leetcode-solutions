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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*current=head;
        vector<int>v;
        while(current!=NULL)
        {
            v.push_back(current->val);
            current=current->next;
        }
        int k=v.size()/2;
        v.erase(v.begin()+k);

        ListNode* dummy=new ListNode(0);
        ListNode*dum=dummy;
        current=dum;
        for(int i=0;i<v.size();i++){
            current->next=new ListNode(v[i]);
            current=current->next;
        }
        return dum->next;
    }
};