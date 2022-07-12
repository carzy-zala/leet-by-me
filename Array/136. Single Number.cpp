class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int i = nums.size()-1;
        sort(nums.begin(),nums.end());
        
        while(i){
                       
            if(nums[i]==nums[i-1]){
                i--;
            }
            
            else{
                return nums[i];
            }
            
            i--;
        }
        return nums[0];
    }
};