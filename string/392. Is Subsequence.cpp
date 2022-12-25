class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0; // for t string
        int j=0; // for s string

        while(i<t.size() && j<s.size()){
            if(s[j]==t[i]){
                j++;
            }
            i++;
        }
    
        if(j>=s.size()){
            return true;
        }

        return false;
    }
};