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
    ListNode* reverse(ListNode* l){
        ListNode*  h = l;
        ListNode*  prev = NULL;
        ListNode* nextNode;

        while(h){
            nextNode=h->next;
            h->next=prev;
            prev=h;
            h=nextNode;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode* l3=new ListNode(0);
        ListNode* ans=l3;
        

        int carry=0;
        
        // adding element
        while(l1!=NULL || l2!=NULL ){

            int sum=carry;

            if(l1){
               sum=sum+l1->val;
               l1=l1->next;
            }

            if(l2){
                sum=sum+l2->val;
                l2=l2->next;
            }
            
            ListNode* newNode = new ListNode(sum%10);
            carry = sum/10;

            if(l3){
                l3->next=newNode;
            }

            l3=newNode;            
        }
        
        // remaining carry is added
        if(carry){
            ListNode* newNode = new ListNode(carry%10);
            carry = carry/10;

            if(l3){
                l3->next=newNode;
            }
        }
        
        // final ans is in reverse order
        ans=reverse(ans->next);
        return ans;
    }
};