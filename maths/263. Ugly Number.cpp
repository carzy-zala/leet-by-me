class Solution {
   
public:
    bool isUgly(int n) {
        if(n<=0){
            return false;
        }

        while (n % 2 == 0)
        {
         n = n/2;
        }

        for (int i = 3; i <= sqrt(n); i = i + 2)
         { 
           while (n % i == 0)
            {
             if(i!=3 && i!=5)
               return false;
             n = n/i;
            }
         }

         if(n>5){
             return false;
         }
        return true;
    }
};