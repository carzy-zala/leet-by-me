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
   ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL || head->next==NULL)
        return head;
    ListNode *temp=head, *ptr;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    k %= len;
    while(k--){
        temp = head;
        while(temp->next!=NULL){
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = NULL;
        temp->next = head;
        head = temp;
    }
    return head;
}
};