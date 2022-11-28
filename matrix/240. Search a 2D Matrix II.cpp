class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col=matrix[0].size()-1;
        int row=0;

        while(col>=0 && row<matrix.size()){
            int element=matrix[row][col];
                        
            if(element==target){
                return true;
            }
            else{
                if(element>target){
                    col--;
                }
                else{
                    row++;
                }
            }
        }

        return false;
    }
};