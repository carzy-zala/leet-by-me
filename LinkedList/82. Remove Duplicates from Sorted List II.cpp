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
        ListNode* ans = new ListNode(0);
        ListNode* a=ans;
        
        while(head){
            if(head->next && head->val == head->next->val){
                while(head->next && head->val == head->next->val){
                    head=head->next;
                 }
                head=head->next;
                continue;
            }
            else{
                ListNode* newNode = new ListNode(head->val);
                ans->next = newNode ;
                ans=newNode;
                head = head->next ;
            }
        }

        return a->next;
    }
};