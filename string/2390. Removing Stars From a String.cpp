class Solution {
public:
    string removeStars(string s) {
        string ans = "";

        for(auto ch : s){

            if(ch!='*'){
                ans.push_back(ch);
            }
            else{
                ans.pop_back();
            }

        }
        return ans;
    }
};