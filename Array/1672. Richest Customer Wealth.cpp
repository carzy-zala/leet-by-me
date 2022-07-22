class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum ;
        int max = -1;
        
        for(int i=0;i<accounts.size();i++){
            sum = 0;
            for(int j=0;j<accounts[i].size();j++){
                sum = sum + accounts[i][j];
            }
            if(max<=sum){
              max = sum ;
            }
        }
        
        return max ;
    }
};