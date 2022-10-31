class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int prevc;
        
        for(int j=0;j<s.length();j++)
        {
            if(s[j]==' ')
                count=0;
            else
             {
                count++;
                prevc=count;
             }
        }
        return prevc;
    }
};

// this code done by zala