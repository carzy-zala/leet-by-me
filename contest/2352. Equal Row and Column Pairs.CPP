class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        int count = 0; 
        int c;
        int n=grid.size();
        
        for(int i=0;i<grid.size();i++){
            
            for(int j=0;j<grid[i].size();j++){
                   c=0;
                  for(int k=0;k<grid[i].size();k++){
                          
                          if(grid[i][k]==grid[k][j]){
                              c++;
                          }
                    
                      }
                
                      if(c==n){
                          count++;
                    }
            }
        }
        
        return count;
    }
};