class Solution
{
public:
    int arrangeCoins(int n)
    {
        int count = 0;
        int i = 1;

        while (n)
        {
            count++;
            i++;
            if (i < n)
                n = n - i;
            else
                break;
        }

        return count;
    }
};