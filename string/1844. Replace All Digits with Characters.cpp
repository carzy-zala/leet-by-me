#include <iostream>
#include <string>
class Solution {
public:
    string replaceDigits(string s) {
        
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                int ll = s[i] - 48;
                s[i] = s[i-1] + ll;
            }
        }
        return s;
    }
};