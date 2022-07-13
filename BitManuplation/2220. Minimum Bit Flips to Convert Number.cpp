class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int ans = 0 ;
        
        while(start || goal){
            
            int bit = (start&1)^(goal&1);
            
            if(bit){
              ans++;
            }
            
            start = start >> 1;
            goal = goal >> 1;
        }
        
        return ans;
    }
};