class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int max=0;
    
        for(int i=nums.size()-1;i>0;i--){
            int val=nums[i]-nums[i-1];
            if(val>max){
                max=val;
            }
        }

        return max;

    }
};