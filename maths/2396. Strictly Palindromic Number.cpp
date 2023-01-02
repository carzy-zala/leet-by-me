class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        
        for(int i=2;i<n-1;i++){
            string s="";
            int a=n;
            while(a){
                int val=a%i;
                a = a/i;
                char c=('48'-val);
                s= s+c;
            }
            int st=0;
            int e=s.size()-1;
            while(st<e){
                if(s[st]!=s[e]){
                    return false;
                }
                st++;
                e--;
            }
        }

        return true;
    }
};