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
    ListNode* partition(ListNode* head, int x) {
        
        if(!head)
            return NULL;
        
        ListNode *h,*s,*g,*s1,*g1;
        h=head;
        s=new ListNode(0);
        s1=s;
        g=new ListNode(0);
        g1=g;
        while(h!=NULL)
        {
            if(h->val < x)
            {
                s1->next=new ListNode(h->val);
                s1=s1->next;
            }
            else
            {
              g1->next=new ListNode(h->val);
              g1=g1->next;
            }
            h=h->next;
        }
        s1->next=g->next;
        
        return s->next;;
    }
};