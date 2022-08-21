class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return 0;
        }

        int count = 0;

        for (int i = 1; i < nums.size(); i++)
        {

            if (nums[i] <= nums[i - 1])
            {
                int n = nums[i - 1] - nums[i] + 1;
                nums[i] = nums[i - 1] + 1;
                count = count + n;
            }
        }
        return count;
    }
};