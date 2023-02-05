class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
		sort(nums.begin(), nums.end());
		int f = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int s = nums[0] * nums[1] * nums[n - 1];
        return max(f,s);
    }
};