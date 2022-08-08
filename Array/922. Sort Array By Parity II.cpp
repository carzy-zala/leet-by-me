class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans;
        int start = 0;
        int end = nums.size()/2;

        vector<int> even;
        vector<int> odd;
        for(int j=0;j<nums.size();j++){
            if(nums[j]%2==0){
                even.push_back(nums[j]);
            }
            else{
                odd.push_back(nums[j]);
            }
        }


        for(int i=0;i<nums.size()/2;i++){
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
            start++;
            end++;
        }


        return ans;
    }
};