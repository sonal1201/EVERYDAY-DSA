//FLOOD FILL

class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& image, int color,int val) {
        int m = image.size();    //-> row
        int n = image[0].size(); //-> col
        if (i < 0 || i >= m || j < 0 || j >= n || image[i][j] == color || image[i][j]!=val) {
            return;
        }

    
            image[i][j] = color;
        

        // dfs call for all direction
        dfs(i + 1, j, image, color,val);
        dfs(i - 1, j, image, color,val);
        dfs(i, j + 1, image, color,val);
        dfs(i, j - 1, image, color,val);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int m = image.size();    //-> row
        int n = image[0].size(); //-> col

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                int val = image[sr][sc];
                dfs(sr, sc, image, color,val);
            }
        }
        return image;
    }
};