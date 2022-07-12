class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int bit;
        int prevBit=n&1;
        
        while(n){
            n = n>>1;
            bit = n&1;
            if(prevBit==bit){
               return false;
            }
            prevBit = bit ;
            
        }
        return true;
    }
};