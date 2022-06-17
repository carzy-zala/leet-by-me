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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode *h; //it point to running pointer of head
        ListNode *lp,*rn; //point previous and next of left and right respectively
        ListNode *prev,*curr,*next;//to reverse the linklist
        ListNode *lh,*rt;
        h=head;
        
        if(left ==right)
        {
            return head;
        }
            
        //set left previous
    
        if(left == 1)
           {
            lp=NULL;
            lh=head;
           }
        else
        {
            for(int i=1;i<left;i++)
        
            {
           
                lp=h;
           
                h=h->next;
           
                lh=h;
        
            }
        }
        
        //set right next
        h=head;
        for(int i=0;i<right;i++)
        {
            rt=h;
            rn=h->next;
            h=h->next;
        }

        // cout<<rn->val;
        //reversing the part
        prev=NULL;
        curr=lh;
        while(curr != rn)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        lh->next=rn;
        if(left!=1)
            lp->next=prev;
        else
            head=prev;
        return head;
    }
};