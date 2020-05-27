//using graph bfs
class Solution {
public:
    vector<int> v[10001];
    bool vis[10001]; 
    int col[10001];
    bool bfs(int node,int c)
    {
        queue<int> q;
        vis[node]=true;
        col[node]=c;
        q.push(node);
        while(!q.empty())
        {
            int p=q.front();
            q.pop();
            for(auto child:v[p])
            {
                if(!vis[child])
                {
                    vis[child]=true;
                    col[child]=c^col[p];//for alternating color 
                    q.push(child);
                    
                }
                else if(col[child]==col[p])
                    return false;
            }
        }
        return true;
    }
        
        
        
        
    bool possibleBipartition(int N, vector<vector<int>>& d) {
        for(int i=0;i<d.size();i++)
        {
            v[d[i][0]].push_back(d[i][1]);
            v[d[i][1]].push_back(d[i][0]);
        }
        bool k=true;
        for(int i=1;i<=N;i++)
        {
            if(!vis[i])
            {
               k= bfs(i,1);
                 if(k==false)
                     break;
            }
        }
        return k;
    }
};
