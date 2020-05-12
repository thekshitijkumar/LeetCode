//using basic DFS Approach and checking for all four neighbours
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color=image[sr][sc];
        //if(color!=newColor) 
        paint(image,sr,sc,image[sr][sc],newColor);
        
            return image;
        
    }
    void paint(vector<vector<int>> &image,int row,int col,int color,int newColor)
    {
        if(image[row][col]==newColor||image[row][col]!=color) return;
            image[row][col]=newColor;
        if(row>=1)
            paint(image,row-1,col,color,newColor);
        if(col>=1)
            paint(image,row,col-1,color,newColor);
        if(row<image.size()-1)
            paint(image,row+1,col,color,newColor);
        if(col<image[0].size()-1)
            paint(image,row,col+1,color,newColor);
    }
};
