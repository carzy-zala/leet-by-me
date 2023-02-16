class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int ans=0;
         vector<int> maxR;
         vector<int> maxC;

         for(int i=0;i<grid.size();i++){
             int maxOfRow=-1;
             int maxOfCol=-1;

             for(int j=0;j<grid.size();j++){
                 if(maxOfRow<grid[i][j]){
                     maxOfRow=grid[i][j];
                 }
                 if(maxOfCol<grid[j][i]){
                     maxOfCol=grid[j][i];
                 }
             }
             maxR.push_back(maxOfRow);
             maxC.push_back(maxOfCol);
         }
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                int mini = min(maxR[i],maxC[j]);
                ans = ans + mini - grid[i][j];
            }
        }

        return ans;
    }
};