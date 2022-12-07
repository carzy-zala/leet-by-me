class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans;

        for(int i=0;i<nums.size();i++){
            if((i==nums.size()-1 || nums[i+1]<nums[i]) && (i==0 || nums[i-1]<nums[i])){
                ans=i;
            }
        }

        return ans;
    }
};