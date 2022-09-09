class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {

        vector<vector<int>> ans;

        int count = 0;

        for (int i = 0, j = 0; i < s1.length(); i++, j++)
        {
            if (s1[i] != s2[j])
            {
                vector<int> a;
                a.push_back(s1[i]);
                a.push_back(s2[j]);
                count++;
                ans.push_back(a);
            }
        }

        if (count == 0)
        {
            return true;
        }

        if (count > 2 || count == 1)
        {
            return false;
        }

        if (ans[0][0] == ans[1][1] && ans[0][1] == ans[1][0])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};