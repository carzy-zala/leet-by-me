class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int n = mat.size()-1;
        
        for(int i=0;i<mat.size();i++){
            ans = ans + mat[i][n-i]+mat[i][i];
        }
        
        if(mat.size()%2==1){
            int temp = mat.size()/2;
            ans = ans - mat[temp][temp];
        }
        return ans;
    }
};