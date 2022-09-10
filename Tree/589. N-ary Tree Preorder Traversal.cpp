class Solution
{
public:
    vector<int> preorder(Node *root)
    {

        if (root == NULL)
        {
            return {};
        }

        stack<Node *> st;

        vector<int> ans;
        st.push(root);

        while (!st.empty())
        {
            Node *temp = st.top();
            st.pop();

            ans.push_back(temp->val);

            for (int i = temp->children.size() - 1; i >= 0; i--)
            {
                st.push(temp->children[i]);
            }
        }
        return ans;
    }
};