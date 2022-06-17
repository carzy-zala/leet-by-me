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
    ListNode* sortList(ListNode* head) {
        ListNode *l=head;
        vector<int> a;
        if(!head)
            return head;
        else{
        while(l)
        {
            a.push_back(l->val);
            l=l->next;
        }
        
        sort(a.begin(),a.end());
        
        l=head;
        for(int j=0;j<a.size();j++)
        {
            l->val=a[j];
            l=l->next;
        }
        
        return head;
        }
    }
};