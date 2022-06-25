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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *r,*t;
        t=head;
        int c=0;
        
        while(t)
        {
           c++;
           t=t->next;
        }
        
        r=head;
        t=head;
        
        for(int i=1;i<k;i++)
        {
            t=t->next;
        }
        
        for(int j=1;j<c-k+1;j++){
            r=r->next;
        }
        
        int temp=r->val;
        r->val=t->val;
        t->val=temp;
        
        return head;
    }
};




