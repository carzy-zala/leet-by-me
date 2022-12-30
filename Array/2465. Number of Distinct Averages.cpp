class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<float> a;

        int i=0;
        int j=nums.size()-1;

        while(i<j){
            a.insert(((float)nums[i]+nums[j])/2);
            i++;
            j--;
        }
        return a.size();

    }
};