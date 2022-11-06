class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        map<string,vector<string>> m;

        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(strs[i].begin(),strs[i].end());
            // add element at the same value
            m[strs[i]].push_back(s);
        }

        for(auto i: m){
            ans.push_back(i.second);
        }

        return ans;
    }
};