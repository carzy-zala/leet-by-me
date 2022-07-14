class Solution {
public:
    
    int noOfBit(int x){
       int count=0;
        while(x){
            int bit = x&1;
            if(bit)
               {
                 count++;
               }
            x = x>>1 ;
        }
        return count;
    }
    
    vector<int> countBits(int n) {
        
        vector<int> ans;
        
        for(int i = 0 ; i<=n ; i++ ){
            ans.push_back(noOfBit(i));
        }
        
        return ans;
    }
};