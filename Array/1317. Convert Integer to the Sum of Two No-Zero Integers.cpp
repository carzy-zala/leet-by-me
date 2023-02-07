class Solution {
public:
    
    bool isZero(int x){

        while(x){
            if(x%10 == 0){
                return true;
            }
            x = x/10;
        }

        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        
        int a = 1;
        int b = n-1;

        while(isZero(b) || isZero(a)){
            a++;
            b--;
        }

        return {a,b};
    }
};