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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head!=NULL)
        {
            ListNode *h;
            int i=0;
            h=head;
            while(h!=NULL)
            {
                i++;
                h=h->next;
            }
            if(n==i)
            {
                head=head->next;
            }
            else
            {
                h=head;
                for(int j=1;j<i-n;j++)
                 {
                   h=h->next;
                 }
                h->next=h->next->next;
            }
        }
        return head;
    }
};