class Solution {
private:
    int reverse(int number) {
	int result = 0;
	while (number > 0) {
		result = result * 10 + number % 10;
		number /= 10;
	}
	return result;	
}
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> s;
        for(auto a : nums){
            s.insert(a);
        }

        for(int i=0;i<nums.size();i++){
            s.insert(reverse(nums[i]));
        }

        return s.size();
    }
};