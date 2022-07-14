class Solution {
public:
    int findComplement(int num) {
        int x = num , y=0;
        
        if(!num){
            return 1;
        }
        
        while(x){
            y = (y<<1)|1;
            x = x>>1;
        }
        
        int ans = (~num)&y; 
        return ans;
    }
};