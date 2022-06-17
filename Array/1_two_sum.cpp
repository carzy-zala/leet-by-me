class Solution {
public:
    bool checkPerfectNumber(int num) {
         if(num==1)
             return 0;
        int n=num;
        int sum=1;
         
        for(int i=2;i<n;++i)
        {
           if(num%i==0)
           {
               n=num;
               n=n/i;
               sum=sum+i+n;
            }
        }
        
       
        if(sum==num)
            return true;
        else
            return false;
    }
};