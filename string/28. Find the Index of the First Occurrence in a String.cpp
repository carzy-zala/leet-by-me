class Solution {
public:
    int strStr(string haystack, string needle) {
    for(int i =0; i<haystack.length();i++){
        for(int len =1;len<= haystack.length();len++){
            if(haystack.substr(i,len) == needle)
                return i;
        }
    }
    
    return -1;
    
    }
};