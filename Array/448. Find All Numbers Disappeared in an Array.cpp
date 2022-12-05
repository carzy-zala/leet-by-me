class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();

        //set all are not present
        vector<int> a(n,0);

        // set true those are present
        for(int i=0;i<nums.size();i++){
            a[nums[i]-1]=1;
        }
        
        vector<int> ans;

        // getting ans
        for(int i=0;i<n;i++){
            if(a[i]==0){
                ans.push_back(i+1);
            }
        }

        return ans;
    }
};