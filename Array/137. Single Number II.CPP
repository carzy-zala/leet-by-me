class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int i = nums.size()-1;
        sort(nums.begin(),nums.end());
        
        while(i){
            
            if(nums[i]==nums[i-1] && nums[i]==nums[i-2]){
                i-=2;
            }
            else{
                return nums[i];
            }
            i--;
        }
        
        return nums[0];
    }
};