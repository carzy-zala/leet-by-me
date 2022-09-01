class Solution {
public:
    int count = 0;
    void countGood(TreeNode* root,int maxx){
        if(root==NULL){
            return ;
        }
        if(root->val>=maxx){
            maxx = root->val;
            count++;
        }
        countGood(root->left,maxx);
        countGood(root->right,maxx);
    }
    int goodNodes(TreeNode* root) {
        int maxx = INT_MIN;
        countGood(root,maxx);
        return count;

    }
};