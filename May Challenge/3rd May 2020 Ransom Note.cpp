class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        //cout.tie(NULL);
        int a[26]={0};
        for(int i=0;i<magazine.length();i++)
        {
            a[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(a[ransomNote[i]-'a']>0)
                a[ransomNote[i]-'a']--;
            else
                return false;
        }
        return true;
        
    }
};
