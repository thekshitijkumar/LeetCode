//using sliding window technique

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
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        int a[26]={0};
        int b[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            a[s1[i]-'a']++;
            b[s2[i]-'a']++;
        }
        for(int i=s1.length();i<s2.length();i++)
        {
            if(check(a,b))
                return true;
            b[s2[i-s1.length()]-'a']--;
            b[s2[i]-'a']++;
        }
        if(check(a,b))
            return true;
        return false;
        
    }
};
