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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ll=new ListNode(0);
        ListNode *ll1,*ll2,*p;
        p=ll;
        ll1=list1;
        ll2=list2;
        
         while(ll1 && ll2)
        {
            if(ll1->val <= ll2->val)
             {
                p->next=new ListNode(ll1->val);
                ll1=ll1->next;
                p=p->next;
             }
            else
                 {
                   p->next=new ListNode(ll2->val);
                   ll2=ll2->next;
                   p=p->next;
                 }
        }
        if(ll1)
        {
            p->next=ll1;
        }
        else
           {
            p->next=ll2;
           }
        return ll->next;
    }
    
};