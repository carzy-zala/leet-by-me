class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        int countLetter=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==letter)
            {
                countLetter++;
            }
                    
        }
        
         int p=((countLetter*100)/s.length());
         
         return p;
    }
};