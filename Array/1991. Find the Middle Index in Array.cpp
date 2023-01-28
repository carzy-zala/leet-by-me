class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
      
        int sum = 0;
        
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        
        int left = 0;
        for(int j=0;j<nums.size();j++){
            
            double right = (sum - nums[j])/2.0;
            
            if(left == right){
                return j;
            }
            left += nums[j];
        }
        return -1;
    }
};