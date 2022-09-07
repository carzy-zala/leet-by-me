class Solution {
public:
    string ans = "";
    string tree2str(TreeNode* root) {
        ans = to_string(root->val);
        if(root->left){
            ans = ans + "(" +tree2str(root->left) + ")";
        }
        if(root->right){
            if(!root->left){
                ans = ans + "()";
            }
          ans = ans + "(" + tree2str(root->right) + ")";
        }
        return ans;
    }
};