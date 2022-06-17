class Solution {
public:
    int reverse(int n) {
        int result = 0;
        while(n!=0){
            int digit = n%10;
            n = n/10;
            if(result > INT_MAX/10 || result == INT_MAX/10 && digit > 7)return 0;
            if(result <INT_MIN/10 || result == INT_MIN/10 && digit < -8)return 0;
            result = result * 10 + digit;
        }
        return result;
    }
};