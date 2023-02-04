class Solution {
public:

    bool isSimilar(vector<int> a,vector<int> b){

       for(int i=0;i<26;i++){
           if((!a[i] && b[i]) || (a[i] && !b[i])){
               return false;
           }
       }
       return true;
    }

    int similarPairs(vector<string>& words) {
        vector<vector<int>> a;

        for(int i=0;i<words.size();i++){
            vector<int> temp(26,0);

            for(int j=0;j<words[i].size();j++){
                int val=words[i][j] -  'a';
                temp[val]++;
            }

            a.push_back(temp);
        }

        int cnt=0;

        for(int i=0;i<a.size()-1;i++){
            for(int j=i+1;j<a.size();j++){
                if(isSimilar(a[i],a[j])){
                    cnt++;
                }
            }
        }

        return cnt;
    }
};