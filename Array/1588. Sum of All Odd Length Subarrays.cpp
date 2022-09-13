class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int sum = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) // This loop will select start element
        {
            for (int j = i; j < n; j++) // This loop will select end element
            {
                for (int k = i; k <= j; k++) // This loop will print element from start to end
                {
                    int l = i - j + 1;
                    if (l % 2 != 0)
                    {
                        sum = sum + arr[k];
                    }
                }
            }
        }
        return sum;
    }
};