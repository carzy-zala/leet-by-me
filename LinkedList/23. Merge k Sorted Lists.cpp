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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> ans;
        ListNode* h;
        for(int i=0;i<lists.size();i++)
        {
            h=lists[i];
            while(h)
            {
                ans.push_back(h->val);
                h=h->next;
            }
        }
        
        sort(ans.begin(),ans.end());
        
      
        ListNode* ansList=new ListNode(0);
        ListNode* ah=ansList;
        
        for(int k=0;k<ans.size();k++)
        {
            ListNode* node=new ListNode(ans[k]);
            ah->next=node;
            ah=node;
        }
        
        return ansList->next;
    }
};