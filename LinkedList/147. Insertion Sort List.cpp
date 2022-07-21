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
    ListNode* insertionSortList(ListNode* head) {
        
        vector<int> ans ;
        ListNode* h = head ;
        
        while(h){
            ans.push_back(h->val);
            h = h->next;
        }
        
        sort(ans.begin(),ans.end());
        
        ListNode * an = new ListNode(0);
        ListNode* lans = an ;
        
        for(int i =0;i<ans.size();i++){
          ListNode* Node = new ListNode(ans[i]);
          an->next = Node ;
          an= Node;
        }
        
        return lans->next ;
    }
};