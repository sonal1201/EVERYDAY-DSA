// Sums of i-th row and i-th column

  // first calculate number of valid rows and colum u can traverse
  // calculate the sum of ith row and ith column and check they are equal or not,if they are not equal just return 0
  // if for all pairs, the sum of rows and colm are equal then return 1


class Solution
{
public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A)
    {
        // code here
        int index = min(N, M);
        for (int i = 0; i < index; i++)
        {
            int row = 0;
            for (int j = 0; j < M; j++)
            {
                row += A[i][j];
            }
            int col = 0;
            for (int j = 0; j < N; j++)
            {
                col += A[j][i];
            }
            if (row != col)
            {
                return 0;
            }
        }
        return 1;
    }
};
