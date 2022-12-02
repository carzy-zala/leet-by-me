class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
       vector<vector<int>> retval;
       
       for(int i=0;i<numRows;i++)
       {
           vector<int> temp(i+1,1);
           for(int j=1;j<i;j++)
           {
             temp[j]=retval[i-1][j-1] + retval[i-1][j];  
           }
           retval.push_back(temp);
       }
       return retval; 
    }
};