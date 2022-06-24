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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* l1a,*l1b,*l2h;
        l1a=list1;
        l1b=list1;
        l2h=list2;
        
        
        int i=a-1,j=b+1;
        
        while(i)
        {
            l1a=l1a->next;
            i--;
        }
        
        while(j)
        {
            l1b=l1b->next;
            j--;
        }
        
        while(l2h->next!=NULL)
        {
            l2h=l2h->next;
        }
        
        l1a->next=list2;
        l2h->next=l1b;

         return list1;
    }
};