class Solution {
public:
    int count = 0;
    int balancedStringSplit(string s) {
        int l=0;
        int r=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
            {
                l++;
            }
            else
            {
                r++;
            }
            if(l==r)
            {
                count++;
                l=r=0;
            }
            
        }
        return count;
    }
};