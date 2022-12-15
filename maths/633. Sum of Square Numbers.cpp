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

// second approach

class Solution {
public:
    bool judgeSquareSum(int c) 
    {
    	long int left=0,right=sqrt(c);
    	while(left<=right)
    	{
    		long int cur=left*left+right*right;
    		if(cur<c)
    			left++;
    		else if(cur>c)
    			right--;
    		else 
    			return true;
    	}    
    	return false;
    }
};