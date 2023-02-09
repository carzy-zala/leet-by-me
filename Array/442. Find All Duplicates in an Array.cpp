class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                ans.push_back(nums[i]);
                
            }
            else{
                m[nums[i]]++;
            }
        }

        return ans;
    }
};