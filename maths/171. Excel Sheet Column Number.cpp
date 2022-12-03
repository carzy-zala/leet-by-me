class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
         
        int c=0;

        for(int i=columnTitle.size()-1;i>=0;i--){
            int val = columnTitle[i] - 'A' + 1;
            ans = ans + ( val * pow (26,c));
            c++;
        }

        return ans;
    }
};