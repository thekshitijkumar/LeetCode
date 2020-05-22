class Solution {
public:
   
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        vector<pair<int,char>> v;
        for(auto i=m.begin();i!=m.end();i++)
        {
            v.push_back({i->second,i->first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            cout<<v[i].second<<" ";
        string st="";
        for(auto i=0;i<v.size();i++)
        {
            int n=v[i].first;
            while(n--)
            st+=v[i].second;
        }
        return st;
        
    }
};



//Using priority Queue

class Solution {
public:
   
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        
        priority_queue<pair<int,char>> pq;//max heap
        for(auto i=m.begin();i!=m.end();i++)
        {
            pq.push({i->second,i->first});
        }
        string st="";
        while(!pq.empty())
        {
            pair<int,char> p=pq.top();
            int n=p.first;
            while(n--)
            {
                st+=p.second;
                
            }
            pq.pop();
        }
        
        return st;
        
    }
};
