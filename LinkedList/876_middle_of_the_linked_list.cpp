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
    ListNode* middleNode(ListNode* head) {
        
        ListNode *l,*h;
        l=h=head;
        
        if(head)
        {
            while(h && h->next)
            {
                l=l->next;
                h=h->next->next;
            }
            return l;
        }
        
        return NULL;
        
    }
};