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
    ListNode* h;
    int cnt=0;
public:
    Solution(ListNode* head) {
        h = head ; 

        while(h!= NULL){
            cnt++;
            h = h->next;
        }

        h = head;
    }
    
    int getRandom() {
        int x = rand() % cnt;
        ListNode* hh=h;
        for(int i=0;i<x;i++){
            hh=hh->next;
        }

        return hh->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */