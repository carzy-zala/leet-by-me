class Solution {
public:
    char repeatedCharacter(string s) {
        char ans ;
        
        for(int i=1;i<s.length();i++){
            for(int j=i-1;j>=0;j--){
            if(s[i]==s[j]){
                ans=s[i];
                return ans;
            }
          }
        }
        
        return ans ;
    }
};