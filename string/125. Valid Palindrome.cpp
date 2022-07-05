class Solution {
public:
    bool isPalindrome(string s) {
        string c="";
        
        for(int i=0;i<s.size();i++)
        {
              if(s[i] >= 65 && s[i]<=90)
              {
                  c+= tolower(s[i]);
              }
             else if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)){
                    c+= s[i];
                }
        }
        
         int start=0,end=c.length()-1;
          while(start<end)
        {
            if(c[start]!=c[end])
                return false;
            start++;
            end--;
        }
        return true;
        
    
    }
};