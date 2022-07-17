class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string c = "";
        
        for(int i=0;i<s.length();i++){
            for(int j=0;j<indices.size();j++){
                if(i==indices[j]){
                    c=c+s[j];
                }
            }
        }
        
        return c;
    }
};