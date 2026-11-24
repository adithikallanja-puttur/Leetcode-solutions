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
    void reorderList(ListNode* head) {
        ListNode*current=head;
        vector<int>v;
        while(current!=NULL)
        {
            v.push_back(current->val);
            current=current->next;
        }
        vector<int>ans;
        for(int i=0;i<v.size()/2;i++)
        {
            ans.push_back(v[i]);
            ans.push_back(v[v.size()-1-i]);
        }
        if(v.size()%2==1)
        ans.push_back(v[v.size()/2]);
        current=head;
        for(int i=0;i<ans.size();i++)
        {
            current->val=ans[i];
            current=current->next;
        }


    }
};