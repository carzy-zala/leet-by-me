class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        uint32_t p = 0;
        
        int i = 31 ;
        
        while(n!=0){
            
            int bit = n&1 ;
            
            p = p + (bit*pow(2,i));
            
            n = n>>1;
            i--;
        }
        
     
        return p;
    }
};