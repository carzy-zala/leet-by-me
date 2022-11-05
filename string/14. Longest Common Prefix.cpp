class Solution {
    string longPrefix(string a,string b){
        string s="";
        int i=0 , j=0 ;

        while(i<a.size() && j<b.size()){
            if(a[i]!=b[j]){
                break;
            }
            s = s + a[i];

            i++;
            j++;
        }

        return s;
    }

public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];

        for(int i=1;i<strs.size();i++){
            ans = longPrefix(ans,strs[i]);
        }

        return ans;
    }
};