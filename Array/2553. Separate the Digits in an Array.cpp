class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            vector<int> temp;
            while(x){
               temp.push_back(x%10);
               x = x/10;
            }

            for(int j=temp.size()-1;j>=0;j--){
                 ans.push_back(temp[j]);
            }
        }

        return ans;
    }
};