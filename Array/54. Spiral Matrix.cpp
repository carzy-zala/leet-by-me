class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        vector<int> ans;
        
        int count=0;
        int total= row*col; //give how many element in the array
    
        
        // definding printing index
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;

        while(count<total){
            
            //printing starting row
            for(int index=startingCol;count<total && index<=endingCol;index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }

            startingRow++;
            
            //printing ending Column
            for(int j=startingRow;count<total && j<=endingRow;j++){
                ans.push_back(matrix[j][endingCol]);
                count++;
            }            
            endingCol--;
            
            //printing ending col
            for(int index=endingCol;count<total && index>=startingCol;index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }            

            endingRow--;
            
            //printing Starting Column
            for(int index=endingRow;count<total && index>=startingRow;index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
            
          
        }
        
        return ans;
    }
    
  
};