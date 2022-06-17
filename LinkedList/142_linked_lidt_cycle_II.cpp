/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *r,*t;
        r=head;
        t=head;
        
      
        
        while(t && r && r->next!=NULL)
        {

            t=t->next;
            r=r->next->next;
            if(t==r)
            
               { 
                break;
                 
               }
        }
          if(!r || !t || !r->next)
            return NULL;
        t=head;
        while(t!=r)
        {
             r=r->next;
             t=t->next;
        }
      return r;
    }
};