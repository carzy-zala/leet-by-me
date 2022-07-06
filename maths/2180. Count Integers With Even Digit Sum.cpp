class Solution {
public:
    
    bool checkeven(int j)  
    {
        int sum=0;
        
        while(j)
            {
                sum=sum+j%10;
                j=j/10;
            }
        
        if(sum%2==0)
            return true;
        return false;
    }
    
    
    int countEven(int num) {
        
        int count =0;
        
        for(int i=1;i<=num;i++)
        {
            if(checkeven(i))
                count++;
             
        }
        
        return count;
    }
};