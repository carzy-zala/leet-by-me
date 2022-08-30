class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);

        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        int left = isBalanced(root->left);
        int right = isBalanced(root->right);
        int compare = abs(height(root->left)-height(root->right))<=1;

        if(left && right && compare){
            return true;
        }
        else{
            return false;
        }
    }
}; 