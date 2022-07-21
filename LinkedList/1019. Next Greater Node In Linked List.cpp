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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> ans ;
        ListNode* h = head ;
        ListNode* temp ;
        
        while(h){
            temp = h->next ;
            bool f = false ;
            while(temp){
                if(temp->val>h->val){
                    ans.push_back(temp->val);
                    f = true;
                    break;
                }
                temp=temp->next;
            }
            
            if(f==false){
                ans.push_back(0);
            }
            
            h = h->next;
            
        }
        
        return ans;
    }
};