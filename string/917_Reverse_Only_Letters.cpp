class Solution {
public:
    string reverseOnlyLetters(string s) {
        // bool f=true,e=true;
        int start=0;
        char temp;
        int end=s.length()-1;
        
        while(start<end)
        {
          if(!isalpha(s[start]))
          {
            start++;
          }
        if(!isalpha(s[end]))
           {
            end--;
           }
        if(isalpha(s[start]) && isalpha(s[end]))
         { 
              temp=s[start];
              s[start]=s[end];
              s[end]=temp;
              start++;
              end--;
         }
        }
        return s;
    }
};