class Solution {
public:
    int sumBase(int n, int k) {
       int sum=0;

       while(n){
           int val=n%k;
           n=n/k;
           sum=sum+val;
       } 

       return sum;
    }
};