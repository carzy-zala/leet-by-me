class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // TRANSPOSE OF MATRIX
        for (int i = 0; i < rows; i++)
        {
            for (int j = i; j < cols; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // we will reverse the transpose of matrix then we will get the exact answer

        for (int k = 0; k < rows; k++)
        {

            int start = 0;
            int end = cols - 1;

            while (start <= end)
            {
                swap(matrix[k][start], matrix[k][end]);
                start++;
                end--;
            }
        }
    }
};