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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        ListNode* lund = head;
        ListNode* p = head;
        ListNode* newNode = new ListNode(0);
        ListNode* t = newNode;
        newNode->next = head;
        
        
        if(head->next==NULL){
            return NULL;
        }
        
        while(p!=NULL && p->next!=NULL){
            t=t->next;
            temp=temp->next;
            p=p->next->next;
        }
        t->next=temp->next;
        return lund;
        
    }
};