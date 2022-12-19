class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="";
        string b="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(a.size()>0)
                  a.erase(a.end()-1);
            }
            else{
                a=a+s[i];
            }
        }

        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(b.size()>0)
                 b.erase(b.end()-1);
            }
            else{
                b=b+t[i];
            }
        }

        if(a==b){
            return true;
        }

        return false;
    }
};