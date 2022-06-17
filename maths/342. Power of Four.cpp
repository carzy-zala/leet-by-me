class Solution {
public:
    bool isPowerOfFour(int n) {
        if(!n) return false;
        while(n%4==0)
            n=n/4;
        return n==1;
        
    }
};