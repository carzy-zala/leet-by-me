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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode *odd,*even,*o1,*e1;
        //odd Listnode for odd linklist and respective pointer o1
        //even listnode for even linklist and respective pointer e1
        if(!head)
            return NULL;
        odd=new ListNode(0);
        o1=odd;
        
        even=new ListNode(0);
        e1=even;
        
        ListNode *h=head;
        int i=0;
        
        while(h)
        {
            i++;
            if(i%2==0)
            {
               e1->next=new ListNode(h->val);   
               e1=e1->next;
            }
            else
            {
                o1->next=new ListNode(h->val);
                o1=o1->next;
            }
            h=h->next;
        }
        
        o1->next=even->next;
        
        return odd->next;
    }
};