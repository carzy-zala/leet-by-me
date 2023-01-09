class Solution {
public:
    void zero(vector<vector<int>>& a,int rowIndex,int colIndex,int row,int col){
        for(int i=0;i<row;i++){
            a[i][colIndex]=0;
        }
        for(int i=0;i<col;i++){
            a[rowIndex][i]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> a = matrix;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    cout<<i<<" "<<j<<endl;
                    zero(a,i,j,m,n);
                }
            }
        }

        matrix = a;
    }
};