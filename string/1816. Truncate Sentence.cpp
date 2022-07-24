class Solution {
public:
    string truncateSentence(string s, int k) {
        string c="";
        int count = 0 ;
        int i=0;
        
        while(i<s.length() && count<k){
            if(s[i+1]==' '){
                
                count++;
            }
        
                c = c + s[i];
            
            i++;
        }
    
      return c;
    }
};