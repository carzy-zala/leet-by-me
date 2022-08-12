class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int start = 0;
        int end = ans.size()-1;

        int maxx = INT_MIN;

        while(start<end){
            maxx = max(maxx,ans[start]+ans[end]);
            start++;
            end--;
        }

        return maxx;
    }
};