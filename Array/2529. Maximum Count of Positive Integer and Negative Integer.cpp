class Solution {
public:
    int maximumCount(vector<int>& nums) {
        vector<int> n;
        vector<int> p;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                n.push_back(nums[i]);
            }
            else{
                if(nums[i]>0){
                   p.push_back(nums[i]);
                }
            }
        }

        

        return max(p.size(),n.size());
    }
};