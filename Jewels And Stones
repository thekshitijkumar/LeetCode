class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> s;
        for(int i=0;i<J.size();i++)
        {
            s.insert(J[i]);
        }
        int count=0;
        for(int i=0;i<S.size();i++)
        {
            if(s.find(S[i])!=s.end())
                count++;
        }
        return count;
        
    }
};
