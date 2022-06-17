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
    ListNode* reverseList(ListNode* head) {
   if(head!=NULL)
   {
       ListNode *curent,*prev,*next;
       curent=head;
       prev=NULL;
        while(curent!=NULL)
        {   
            next=curent->next;  
            curent->next=prev;    
            prev=curent;      //at last it at the startiong node
            curent=next;     //at last it goes to null
        }
  
       return prev;

     }
        return head;
    }
};