class Solution {
public:
    int divide(int dividend, int divisor) {
        int result;
        
        if(dividend==pow(-2,31) && divisor==-1)
            return (pow(2,31)-1);
        
        result=dividend/divisor;
        cout<<trunc( result);
        if(result>(pow(2,31)-1))
            return (pow(2,31)-1);
        else
          if(result<pow(-2,31))
             return pow(-2,31);
          else
             return trunc(result);
    }
};

