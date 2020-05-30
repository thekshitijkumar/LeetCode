class Solution {
public:
    int dist(int a,int b)
    {
        int d=(pow(a,2)+pow(b,2));
        return d;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        //we need min heap
       // auto x=pair<int,pair<int,int>>;
        
        priority_queue< pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>> , greater < pair <                                    int,pair<int,int> > > > pq;
        for(int i=0;i<points.size();i++)
        {
            int calc=dist(points[i][0],points[i][1]);
            pq.push({calc,{points[i][0],points[i][1]}});
        }
        
       vector<vector<int>> ok;
        int count=0;
      while(count<K)
      {
          pair<int,pair<int,int>> f=pq.top();
          ok.push_back({f.second.first,f.second.second});
          count++;
          pq.pop();
      }
        return ok;
    }
};
