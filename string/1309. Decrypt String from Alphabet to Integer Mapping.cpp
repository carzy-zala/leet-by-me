class Solution
{
public:
    string freqAlphabets(string s)
    {

        char str[] = {'1', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

        string ans = "";
        int i = 0;
        while (i < s.length())
        {

            if (i + 2 < s.length() && s[i + 2] == '#')
            {
                string str2;
                str2 = str2 + s[i] + s[i + 1];
                int an = stoi(str2);
                ans = ans + str[an];
                i += 3;
            }
            else if (s[i] >= '1' && s[i] <= '9')
            {
                int ab = (int)s[i] - 48;
                ans = ans + str[ab];
                i++;
            }
        }
        return ans;
    }
};