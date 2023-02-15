class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<pair<int,int>,int> m;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k){
                
                   // making pair
                   pair<int,int> p=make_pair(nums[i],nums[j]);
                   pair<int,int> q=make_pair(nums[j],nums[i]);

                   // find pair is present or not
                   if(m.find(p)==m.end() && m.find(q)==m.end()){
                       cnt++;
                   }
                   m[p]++;
                }
            }
        }

        return cnt;
    }
};