class Solution {
    bool palindrom(string st,int suru,int khatam){
        while(suru<khatam){
            if(st[suru]!=st[khatam]){
                return false;
            }
            suru++;
            khatam--;
        }
        return true;
    }
    
public:
    bool validPalindrome(string s) {
        bool f=false;
        int start=0;
        int end=s.size()-1;
        
        while(start<end){
            if(s[start]!=s[end] ){
                return palindrom(s,start+1,end)||palindrom(s,start,end-1);
            }
            start++;
            end--;
        }
        return true;
    }
};