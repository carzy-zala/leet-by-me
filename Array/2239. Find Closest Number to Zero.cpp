class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(abs(nums[i])<=abs(min))
            {
                if(nums[i]<0 && (abs(nums[i])!=abs(min)))
                    min=nums[i];
                else
                   if(abs(nums[i])==abs(min))
                     min=min<nums[i]?nums[i]:min;
                   else
                    min=abs(nums[i]);
            }
        }
        return min;
    }
};