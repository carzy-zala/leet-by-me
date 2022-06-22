class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool lc=0,uc=0,d=0,sc=0;
        int j;
        
        if(password.length()>=8)
        for(int i=0;i<password.length();i++)
        {
                if(password[i]==password[i+1])
                    return false;             
               
                if(password[i]>='A' && password[i]<='Z')
                   uc=1;
               else if(password[i]>='a' && password[i]<='z')
                   lc=1;
                else if(password[i]>='0' && password[i]<='9')
                     d=1;
                else
                    sc=1;
            
        }
        if(lc && uc &&d && sc)
                return true;
        return false;
    }
};