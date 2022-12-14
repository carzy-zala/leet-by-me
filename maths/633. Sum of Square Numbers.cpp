class Solution {
public:
    bool judgeSquareSum(int c) {
        int e=sqrt(c);
        if(e*e == c){
            return true;
        }

        while(e>0){
            int d = c - (e*e);
            int f = sqrt(d);
            if( d == f*f ){
                return true;
            }
            e--;
        }


        return false;
    }
};