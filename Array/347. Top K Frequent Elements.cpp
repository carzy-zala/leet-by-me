class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        vector<pair<int,int>> a;

        for(auto i:m){
            a.push_back(make_pair(i.second,i.first));
        }

        sort(a.begin(),a.end());

        vector<int> ans;
        int i=a.size()-1;
        while(k--){
            ans.push_back(a[i--].second);
        }
        return ans;
    }
};