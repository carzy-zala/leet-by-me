class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {

        for (int i = 0; i < words.size() - 1; i++)
        {
            if (words[i] != words[i + 1])
            {
                int p = 0;
                int j = 0;
                while (words[i][j] == words[i + 1][j] && (j < words[i].size() && j < words[i + 1].size()))
                {
                    j++;
                }
                if (j == words[i + 1].size())
                {
                    return false;
                }
                if (j == words[i].size())
                {
                    return true;
                }
                while (words[i][j] != order[p] && words[i + 1][j] != order[p])
                {
                    p++;
                }

                if (words[i + 1][j] == order[p] && words[i][j] != order[p])
                {
                    return false;
                }
            }
        }

        return true;
    }
};