class Solution
{
public:
    int gcd(int a, int b)
    {
        int result = a;
        while (result > 0)
        {
            if (a % result == 0 && b % result == 0)
            {
                break;
            }
            result--;
        }
        return result;
    }
    int findGCD(vector<int> &nums)
    {
        int minn = INT_MAX;
        int maxx = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            minn = min(minn, nums[i]);
            maxx = max(maxx, nums[i]);
        }

        int ans = gcd(minn, maxx);
        return ans;
    }
};