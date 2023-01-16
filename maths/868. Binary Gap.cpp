class Solution {
public:
    int binaryGap(int n) {
        int startIndex=0;
        int finalIndex=0;
        int ans;

        // for first one
        while((n&1) == 0){
            n=n>>1;
            startIndex++;
            finalIndex++;
        }
        
        ans = finalIndex - startIndex;

        finalIndex++;
        n = n>>1;  // it should be done because if we don't done then only finalIndex grow not number grow

       // for after ones occur
        while(n){
            if((n&1)==1){
                int val = finalIndex - startIndex;
                if(ans<val){
                    ans = val;
                }
                startIndex=finalIndex;

            }

            finalIndex++;
            n = n>>1;
        }

        return ans;
        
    }
};