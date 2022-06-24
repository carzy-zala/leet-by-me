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
    
    ListNode * reverse(ListNode* l)
    {
        ListNode* curr=l;
        ListNode* next=l->next;
        ListNode* prev=NULL;
        
        while(curr)
        {
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
           
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        
        
       
        
        
        ListNode *r,*t,*tp;
        r=head;
        t=head;
        
        if(head!=NULL && head->next!=NULL && head->next->next!=NULL){
            
            //get middle one of the linked list
             while(r && r->next)
             {
                 tp=t;
                 t=t->next;
                 r=r->next->next;
             }
             
            //getting half of linked list reverse
             if(r!=NULL){
             r=reverse(t->next);
                    t->next=NULL;
             }
             else
             {
                 r=reverse(t);
                 tp->next=NULL;
             }
          
             t=head; //setting t to the head for further execution
             ListNode *temp,*temp2;
             
            //reordering
             while(r && t)
             {
                 temp=t->next;
                 temp2=r->next;
                 
                 t->next=r;
                 t=temp;
                 
                 r->next=temp;
                 r=temp2;
             }
        }
    }
};