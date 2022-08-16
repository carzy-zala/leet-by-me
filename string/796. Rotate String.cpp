class Solution {
public:
    bool rotateString(string s, string goal) {

        for(int i=0;i<s.length();i++){
            int first= s[0];

            for(int j=0;j<s.length()-1;j++){
                s[j]=s[j+1];

            }
            s[s.length()-1]=first;

            if(s==goal){
                return true;
            }
        }
        return false;
    }
};