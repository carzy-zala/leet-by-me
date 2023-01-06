class Solution {
    static bool comp(pair<char,int> a,pair<char,int> b){
            return a.second>b.second;
        }
public:
    string frequencySort(string s) {
        map<char,int> m;

        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        vector<pair<char,int>> ans;
        
        for(auto it:m){
            ans.push_back(it);
        }

        sort(ans.begin(),ans.end(),comp);

        string ansString;

        for(auto i:ans){
            for(int j=0;j<i.second;j++){
                ansString+=i.first;
            }
        }

        return ansString;
    }
};