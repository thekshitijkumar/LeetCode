//using Sliding Window technique Time Complexity O(n)
class Solution {
public:
    bool check(int a[],int b[])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> out;
        if(!s.length()||s.length()<p.length())//is s is blank then returning blank vector
            return out;
        int a[26]={0};//short string characters
         int b[26]={0};
        int i=0;
        for(i=0;i<p.length();i++)
        {
            a[p[i]-'a']++;
            b[s[i]-'a']++;
        }
       
        for(i=p.length();i<s.length();i++)
        {
             if(check(a,b))
                out.push_back(i-p.length());
            
            b[s[i-p.length()]-'a']--;
            b[s[i]-'a']++;
           
        }
        if(check(a,b))
            out.push_back(s.length()-p.length());
        
        
    
           return out;
         }
};
