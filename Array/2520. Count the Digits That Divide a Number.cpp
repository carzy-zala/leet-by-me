class Solution {
public:
    int countDigits(int num) {
        int ans = 0;
        int n = num;
        while(num){
            int val = num % 10 ; 
            if(n%val == 0){
                ans++;
            }
            num = num / 10 ;
        }

        return ans;
    }
};