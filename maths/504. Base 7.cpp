class Solution {
public:
    string convertToBase7(int num) {
        string ans="";
        int a=num;
        if(!a)
            return "0";
        
        while(a){
            ans=ans+to_string(abs(a)%7);
            a=a/7;
        }
        if(num<0)
            ans=ans+"-";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};