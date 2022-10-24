class Solution {
public:
// function to return max
    int max(int a, int b){
        return a>b?a:b;
    }
    void dfs(vector<vector<int>>& grid, int i, int j, vector<pair<int,int>> &current_island){
        int r = grid.size();
        int c = grid[0].size();
		// boundary check
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j]==0) return;
        grid[i][j] = 0;
		// adds current block (i,j) to the current island
        current_island.push_back({i,j});
		// calling dfs for all 4 directions
        dfs(grid,i+1,j,current_island);
        dfs(grid,i,j+1,current_island);
        dfs(grid,i,j-1,current_island);
        dfs(grid,i-1,j,current_island);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
		// we declare a vector containing all islands
        vector<vector<pair<int,int>>> islands;
		// this vector of pair holds blocks which form an island
        vector<pair<int,int>> current_island;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j]==1){
				//when we encounter a block of island, we clear our current island vector
                    current_island.clear();
					// Depth First Search visits all connected blocks that form island and we mark them 0 (see function above)
                    dfs(grid,i,j,current_island);
					// after dfs our current island holds all connected blocks that form an island so we push it into our islands vector
                    islands.push_back(current_island);
                } 
            }
        }
		// now we simply find the island that is biggest in size
        int mx = 0;
        for(auto it: islands){
            mx = max(mx, it.size());
        }
	
        return mx;
    }
};
