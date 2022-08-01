class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int len = s.length();
        string first = "";
        string second = "";
        int firstCount = 0;
        int secondCount = 0;
        for (int i = 0; i <= len / 2 - 1; i++)
        {
            first = first + s[i];
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                firstCount += 1;
            }
        }
        for (int j = len / 2; j < len; j++)
        {
            second = second + s[j];
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')
            {
                secondCount += 1;
            }
        }
        cout << firstCount << " " << secondCount;

        if (firstCount == secondCount)
        {
            return true;
        }
        return false;
    }
}; 

 