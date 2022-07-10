class Solution {
public:
    int tribonacci(int n) {
        
        if(n==0 ||n==1){
            return n;
        }
        
        if(n==2){
            return 1;
        }
        
        int sum;
        int fst=0;
        int snd=1;
        int trd=1;
        
        for(int i=2;i<n;i++)
        {
            sum=fst+snd+trd;
            fst=snd;
            snd=trd;
            trd=sum;
        }
        
        return trd;
    }
};