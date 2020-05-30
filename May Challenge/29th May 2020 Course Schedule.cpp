//using dfs approach

class Solution {
public:
    bool isCyclic(vector<int> adj[],vector<int> &visited,int i)
    {
        if(visited[i]==2)//in processing
            return true;
        if(visited[i]==0)//not visited
        {
            visited[i]=2;
            for(auto edge:adj[i])
            {
                if(isCyclic(adj,visited,edge))
                    return true;
            }
        }
        visited[i]=1;//processed edge
        return false;
            
    }
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto i:prerequisites)
        {
            adj[i[1]].push_back(i[0]);
        }
        vector<int> visited(numCourses,0);
        
        for(int i=0;i<numCourses;i++)
        {
            if(isCyclic(adj,visited,i))
                return false;
        }
        return true;
        
    }
};
