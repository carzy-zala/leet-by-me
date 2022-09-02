class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;

        if (root == NULL)
        {
            return ans;
        }

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
            ans.push_back(a);
        }
        return ans;
    }
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<vector<int>> traversal = levelOrder(root);
        vector<double> ans;

        for (int i = 0; i < traversal.size(); i++)
        {

            double sum = 0;
            int count = 0;
            for (int j = 0; j < traversal[i].size(); j++)
            {
                count++;
                sum = sum + traversal[i][j];
            }
            ans.push_back((double)sum / count);
        }

        return ans;
    }
};