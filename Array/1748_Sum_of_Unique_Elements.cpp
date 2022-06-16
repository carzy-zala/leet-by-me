class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        bool f;
        
        for(int i=0;i<nums.size();i++)
        {
            f=false;
           for(int j=0;j<nums.size();j++)
           {
               if(nums[i]==nums[j] && i!=j)
                   f=true;
           }
            if(!f)
              sum=sum+nums[i];
        }
        
        return sum;
    }
};