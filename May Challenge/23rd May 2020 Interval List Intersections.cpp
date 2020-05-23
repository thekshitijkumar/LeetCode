class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int i=0,j=0;
        vector<vector<int>> al;
      //  vector<int> ok;
        while(i<A.size()&&j<B.size())
        {
            int low=max(A[i][0],B[j][0]);
            int high=min(A[i][1],B[j][1]);
            if(low<=high)
            {
                // ok.clear();
                // ok.push_back(low);
                // ok.push_back(high);
                //cout<<low<<high;
                al.push_back({low,high});
            }
             if(A[i][1]<B[j][1])
                i++;
            else
                j++;
               
        }
        return al;
        
    }
};
