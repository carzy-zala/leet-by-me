class Solution {
public:
    vector<int> count(string s){
        vector<int> a(26,0);

        for(int i=0;i<s.size();i++){
            int val = s[i] - 'a';
            a[val]++;
        }

        return a;
    }

    bool isEqual(vector<int> a,vector<int> b){
        
        for(int i=0;i<26;i++){
            if(a[i] && b[i]){
                return false;
            }
        }

        return true;
    }

    int maxProduct(vector<string>& words) {

        vector<vector<int>> a;

        for(int i=0;i<words.size();i++){
            a.push_back(count(words[i]));
        }

        int ans=0;
        for(int i=0;i<a.size()-1;i++){
            for(int j=i+1;j<a.size();j++){
                if(isEqual(a[i],a[j])){
                    int val = words[i].length() * words[j].length();
                    if(val>ans){
                        ans=val;
                    }
                }
            }
        }

        return ans;
    }
};