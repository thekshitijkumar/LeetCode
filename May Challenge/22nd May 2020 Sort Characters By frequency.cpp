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
