class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int>ans ;
        
        sort(nums.begin(),nums.end());
        
        if(nums.size()==2){
            return nums;
        }
        
        for(int i=0 ; i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                i++;
            }
            else{
                ans.push_back(nums[i]);
            }
        

        }
        
        if(ans.size()!=2){
            ans.push_back(nums[nums.size()-1]);
        }
     
        return ans;
    }
};