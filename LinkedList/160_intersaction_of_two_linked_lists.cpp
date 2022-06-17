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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *h1,*h2;
        h1=headA;
        h2=headB;
        int i=0,j=0;
        if(h1&&h2)
        {
           //find length
            while(h1 || h2)
             {
                 if(h1)
                 {
                     i++;
                     h1=h1->next;
                 }   
                 if(h2)
                 {
                     j++;
                     h2=h2->next;
                 }
             }
        
             h1=headA;
             h2=headB;
        
             //cover a distance
             int p;
             if(i>=j)
              {
                p=i-j;
             
                while(p--)
                 {
                  h1=h1->next;
                 }
              }
           else
             {   
              p=j-i;
             
              while(p--)
               {
                   h2=h2->next;
               }       
              }

            //getting common node
          
             while(h1 || h2)
              {
                   if(h1 == h2)
                      return h1;
                   h1=h1->next;
                   h2=h2->next;
              }
            
            
        } 
        
        return NULL;
        
        
        
    }
};