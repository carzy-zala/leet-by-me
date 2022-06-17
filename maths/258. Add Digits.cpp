class Solution {
public:
    int addDigits(int num) {
        if(num/10==0)
            return num;
        int s=0;
        while(num!=0)
        {
           s=s+(num%10);
           num=num/10;
           
        }
        if(s<10)
            return s;
        else
            return addDigits(s);
        
        
    }
};