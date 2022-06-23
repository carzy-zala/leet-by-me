/*
------------- Happy Number -----------------
after one time square of one digit number if two digit number come done the process of checking happy     number otherwise not
*/


class Solution {
public:
    bool isHappy(int n) {
        
        if(n==1  || !n)
           return true;   
        
        int p=n;
        int d;
        int x;
        

        
        while(p/10 && n>9)    //for two digit number
        {
              x=0;
            
            while(p)
            {
                d=p%10;
                x=x+d*d;
                p=p/10;
            }
            p=x;
        }
        
                        //for one digit n and x<10 after excution of the two digit number
         do{
            x=0;
            
            while(p)
            {
                d=p%10;
                x=x+d*d;
                p=p/10;
            }
            p=x;
           
        }while( p/10);    
        
          if(x==1)
                return true;
        return  false;
    }
};