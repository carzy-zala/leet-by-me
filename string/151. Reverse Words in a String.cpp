class Solution {
public:

    string reverseWords(string s) {
        string ans="";

        string temp="";

        int j = 0;

        while(s[j]==' '){
            j++;
        }
        
        for(int i=s.size()-1;i>=j;i--){
              if(s[i]==' '){
                  if(temp.size()>0){
                  ans = ans +temp + " "; 
                  temp="";
                }
              }
              else{
                  temp=s[i]+temp;
              }
        }

        ans=ans+temp;
        
        return ans;
    }
};