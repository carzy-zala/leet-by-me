class Solution {
private:
    int org, colour;
    void floodFillhelp(vector<vector<int>>& image, int sr, int sc) {
        if (sr<0 || sc<0 || sr>=image.size() || sc>image[0].size() || image[sr][sc]!=org || image[sr][sc]==colour) return;
        image[sr][sc]=colour;
        floodFillhelp(image, sr-1, sc);
        floodFillhelp(image, sr, sc-1);
        floodFillhelp(image, sr+1, sc);
        floodFillhelp(image, sr, sc+1);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        org = image[sr][sc];
        colour = color;
        floodFillhelp(image, sr, sc);
        return image;
    }
};