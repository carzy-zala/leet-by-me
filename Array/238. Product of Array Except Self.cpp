class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int s=1;
        int e=1;
        
        int n=nums.size();
        vector<int> res(n,1);
      
        for(int i=0;i<nums.size();i++){
            res[i] *= s;
            s = s*nums[i];
            res[n-i-1] *= e;
            e = e * nums[n-i-1];
        }
       
       return res;
    }
};