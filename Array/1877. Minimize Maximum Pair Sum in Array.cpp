// first approch

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        vector<int> ans;
        
        //sorting given array
        sort(nums.begin(),nums.end());
        
        int s=0;
        int e=nums.size()-1;
        
        while(s<e){
            ans.push_back(nums[s++]+nums[e--]);
        }
        
          
          return *max_element(ans.begin(),ans.end());
    }
};


// second approach

class Solution
{
private:
    int pairs(vector<int> &nums)
    {
        int start = 0;
        int end = nums.size() - 1;

        int maxu = INT_MIN;

        while (start < end)
        {
            maxu = max(maxu, nums[start] + nums[end]);
            start++;
            end--;
        }
        return maxu;
    }

public:
    int minPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return pairs(nums);
    }
};