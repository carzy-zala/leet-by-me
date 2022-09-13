class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        string ans = "";
        int i=0;
        int j=0;
        while(i<m && j<n){
            ans = ans + word1[i];
            ans = ans + word2[j];
            i++;
            j++;
        }
        while(i<m){
            ans = ans+word1[i];
            i++;
        }
        while(j<n){
            ans=ans+word2[j];
            j++;
        }

        return ans;
    }
};