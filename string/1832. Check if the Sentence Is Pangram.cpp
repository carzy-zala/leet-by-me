class Solution {
public:
    bool checkIfPangram(string sentence)
    {
        if (sentence.length() < 26)
        {
            return false;
        }
        set<char> s;
        for (int i = 0; i < sentence.length(); i++)
        {
            s.insert(sentence[i]);
        }

        if (s.size() >= 26)
        {
            return true;
        }
        return false;
    }
};