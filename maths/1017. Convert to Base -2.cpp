class Solution {
public:
    string baseNeg2(int n) {
        string ans = "";
        
        while(n!=0){
            int digit = n&1;
            ans = to_string(digit) + ans;
            n = -(n>>1);
            cout << n <<" ";
        }
        
        if(ans == ""){
            return "0";
        }
        return ans;
    }
};