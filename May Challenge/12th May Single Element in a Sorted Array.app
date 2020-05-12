class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int xori=0;
        for(int i=0;i<nums.size();i++)
        {
            xori^=nums[i];
        }
        return xori;
        
    }
};
