class Solution {
public:
    void flood(vector<vector<int>>& image, int i, int j, int old_col ,int color, int n , int m)
    {
        if(i < 0 || j < 0 || i > n-1 || j > m-1 || image[i][j] != old_col)
            return ;
        
        image[i][j] = color ;
        
        flood(image,i-1,j,old_col,color,n,m);
        flood(image,i+1,j,old_col,color,n,m);
        flood(image,i,j-1,old_col,color,n,m);
        flood(image,i,j+1,old_col,color,n,m);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       
        if(image[sr][sc] == color)
            return image;
        int n = image.size();
        int m = image[0].size();
        int old_col = image[sr][sc];
        flood(image,sr,sc,old_col,color,n,m);
        return image;
    }
};