class Solution {
private:
    void compute(vector<int>&nums,vector<int>&ds,int& sum,int index,int size){
        if(index==size){
            int ans = 0;
            for(int i=0;i<ds.size();i++){
                ans = (ans^ds[i]);
            }
            sum = sum + ans;
            return;
        }

        ds.push_back(nums[index]);
        compute(nums,ds,sum,index+1,size);
        ds.pop_back();
        compute(nums,ds,sum,index+1,size);
    }
public:
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        vector<int>ds;
        int index = 0;
        int size = nums.size();
        compute(nums,ds,sum,index,size);
        return sum;
    }
};