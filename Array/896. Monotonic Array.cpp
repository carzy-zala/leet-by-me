class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {

        bool isIncreasing = is_sorted(nums.begin(), nums.end());
        bool isDecreasing = is_sorted(nums.begin(), nums.end(), greater<int>());

        if (isIncreasing || isDecreasing)
        {
            return true;
        }
        return false;
    }
};