// Special Positions in a Binary Matrix

// Input: mat = [[1,0,0],
//  [0,1,0],
//   [0,0,1]]
// Output: 3
// Explanation: (0, 0), (1, 1) and (2, 2) are special positions.

class Solution
{
public:
    int numSpecial(vector<vector<int>> &mat)
    {
        int r = mat.size();
        int c = mat[0].size();

        int row[r];
        int col[c];

        // initialize every element of row and col with zero.
        for (int i = 0; i < r; i++)
            row[i] = 0;
        for (int i = 0; i < c; i++)
            col[i] = 0;

        // count the no.s of 1s in row and col.
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {

                if (mat[i][j] == 1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        // count the special position
        int cnt = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] == 1 && row[i] == 1 && col[j] == 1)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};