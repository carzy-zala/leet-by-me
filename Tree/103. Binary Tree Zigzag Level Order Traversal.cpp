/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == NULL)
        {
            return ans;
        }

        int count = 0;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int size = q.size();

            vector<int> a;

            for (int i = 0; i < size; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                a.push_back(temp->val);

                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            count++;
            if(count%2==0){
                reverse(a.begin(),a.end());
                ans.push_back(a);
            }
            else{
            ans.push_back(a);
            }
        }
        return ans;
    }
};