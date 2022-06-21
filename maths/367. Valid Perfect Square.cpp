class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int i=1,k;
        
        
        while(i<46341 && num>=(i*i) )
        {
            k=num;
            
            for(int j=0;j<2;j++)
            {
                if(k%i==0)
                   k=k/i;
            }
            
            if(k==1)
                return true;
            i++;
        }
        
        return false;
    }
};