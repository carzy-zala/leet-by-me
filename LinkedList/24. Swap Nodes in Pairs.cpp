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
    void swap(ListNode* p)
            {
              int temp=p->val;
              p->val=p->next->val;
              p->next->val=temp;
            }
    
    ListNode* swapPairs(ListNode* head) {

        
        
        ListNode *h;
        h=head;
        
        while(h!=NULL && h->next!=NULL)
        {
        
           swap(h);
           h=h->next->next;
        }
        return head;
    }
};

