//using dp to find minimum element above the element,to the left or diagonally above then adding one to it to find side of square formed by all 1's

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int count=0;
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][j]!=0)
                {
                    matrix[i][j]=1+min(matrix[i-1][j],min(matrix[i][j-1],matrix[i-1][j-1]));
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
                cout<<matrix[i][j]<<" ",count+=matrix[i][j];
            cout<<endl;
        }
        return count;
    }
};
