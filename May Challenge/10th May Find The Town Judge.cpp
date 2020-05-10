//Based on indegree and outdegree concept
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        vector<int> c(n,0);
        for(int i=0;i<trust.size();i++)
        {
            c[trust[i][0]-1]--;//indegree
            c[trust[i][1]-1]++;//outdegree
            
        }
        for(int i=0;i<n;i++)
        {
            if(c[i]== (n-1))
                return i+1;
        }
        return -1;
        
    }
};
