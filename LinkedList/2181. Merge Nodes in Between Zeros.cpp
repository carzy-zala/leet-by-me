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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* h=head->next;
        ListNode* cm=new ListNode(0);
        ListNode* t=cm;
        int sum=0;
        while(h!=NULL){
            if(h->val!=0){
                sum=sum+h->val;
            }
            else{
                ListNode* node = new ListNode(sum);
                cm->next=node;
                cm=cm->next;
                sum=0;
                
            }
            h=h->next;
        }
        
        return t->next;
    }
};