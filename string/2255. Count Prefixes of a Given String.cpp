class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0 ;

        for(int i=0;i<words.size();i++){
            int j = 0 ;
            int k = 0 ;

            for(;k<words[i].size();k++){
                if(words[i][k] != s[j]){
                    break;
                }
                j++;
            }

            if(k == words[i].size()){
                cnt ++ ;
            }
        }
      return cnt;
    }

};