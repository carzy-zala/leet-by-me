class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size()/2;

        for(int i=0;i<nums.size();i++){

            auto it=m.find(nums[i]);

            if(it!=m.end()){
                m[nums[i]]++;
            }
            else{
                m[nums[i]]=1;
            }
        }

        for(auto f : m){
            if(f.second>n){
                return f.first;
            }
        }

        return nums[0];
    }
};