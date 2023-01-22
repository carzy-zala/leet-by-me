class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0 ;
        int sumOfDigit = 0 ;

        for(int i=0;i<nums.size() ; i++){
            sum = sum + nums[i];

            while(nums[i]){
                sumOfDigit = sumOfDigit + (nums[i]%10);
                nums[i] = nums[i] / 10;
            }
        }
        
        return abs(sum - sumOfDigit);
    }
};