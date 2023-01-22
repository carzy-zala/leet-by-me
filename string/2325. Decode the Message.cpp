class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        unordered_map<char, char> mp;

        int i = 0, j = 0;
        while (j <= 25)
        {
            while (mp.find(key[i]) != mp.end() || key[i] == ' ')
            {
                i++;
            }
            mp[key[i]] = alpha[j];
            j++;
        }

        string answer = "";

        for (auto item : message)
        {
            if (item == ' ')
            {
                answer += ' ';
            }
            else
            {
                answer += mp[item];
            }
        }
        return answer;
    }
};