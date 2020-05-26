class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==0)
               nums[i]=-1;
       }
        //making all zeros as -1 now find largest subarray with sum as zero
        int sum=0;
        map<int,int> m;
        int len=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==0)
            {
                    len=i+1;
            }
            if(m.find(sum)==m.end())//couldn't find a sum 
            {
                m[sum]=i;
            }
            if(m.find(sum)!=m.end())//found a sum
            {
                if(len<i-m[sum])
                    len=i-m[sum];
            }
            
            
        }
        return len;
    }
};
