class Solution {
public:
    bool checkPalindrom(string s)
    {
        for(int i=0;i<s.length();i++)
        {
             if(s[i]!=s[s.length()-i-1]){
                 return false;
             }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int j=0;j<words.size();j++){
            if(checkPalindrom(words[j]))
            {
                return words[j];
            }
        }
       return "";
    }
};