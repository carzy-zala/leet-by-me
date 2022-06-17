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
    int getDecimalValue(ListNode* head) {
        
        ListNode *l;
        vector<int> p;
        int s=0;
        
        l=head;
        while(l)
        {
          p.push_back(l->val);
            l=l->next;
        }
        reverse(p.begin(),p.end());
        for(int i=0;i<p.size();i++)
        {
            s+=(pow(2,i)*p[i]);
        }
        return s;
    }
};