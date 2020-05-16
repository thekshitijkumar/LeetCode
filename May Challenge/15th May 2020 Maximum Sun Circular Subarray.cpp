class Solution {
public:
    int kadene(vector<int> a)
    {
        int cur=0;
        int mx=INT_MIN;
        for(int i=0;i<a.size();i++)
        {
            cur+=a[i];
            if(cur>mx)
                mx=cur;
            if(cur<0)
                cur=0;
        }
        return mx;
    }
    int maxSubarraySumCircular(vector<int>& A) {
        int ok=kadene(A);
        int sum=0;
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
            A[i]=-A[i];
        }
        int now=kadene(A);
        sum+=now;
        if(sum==0)
            return ok;
        return max(ok,sum);
        
    }
};
