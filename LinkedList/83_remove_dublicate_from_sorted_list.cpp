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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head!=NULL)
        {
            ListNode* h=head;
            ListNode* n=head->next;
        
            while(h->next!=NULL)
        
            {          
                if(h->val==n->val)
                {  
                    h->next=n->next;
                    n=n->next;
                }
            
                else
                {
                    h=n;         
                    n=n->next;
                }
            }

        }
        return head;
        
    }
};