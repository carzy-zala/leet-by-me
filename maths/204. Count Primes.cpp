class Solution {
public:   
    int countPrimes(int n) {
        int c=0;
        vector<bool> primes(n+1,true);
        primes[0]=primes[1]=0;
        
        for(int i=2;i<n;i++)
        {
            if(primes[i])
            {
                 c++;
                
                for(int j=i*2;j<n;j+=i)
                   primes[j]=0;
            }
        }
      
       
        return c;
    }
};