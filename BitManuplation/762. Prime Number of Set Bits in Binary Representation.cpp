class Solution {
public:
    bool isPrime(int x){
        if(x==1 || !x){
            return false;
        }
        
        for(int i = 2 ; i<x; i++){
            if(x%i==0){
              return false;
            }
        }
        
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        
        
        int count = 0 ;
        int noOfOne ;
        int x;
        
        for(int n=left ; n<=right ; n++){
            
            noOfOne = 0;
            x=n;
            
            while(x){
                int bit = x&1;
                if(bit){
                  noOfOne++;
                }
                x= x>>1;
            }
            

            if(isPrime(noOfOne)){
                count++;
            }

        }
        
        return count;
    }
};