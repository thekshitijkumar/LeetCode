// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
//O(Log(n)) approach Binary search
class Solution {
public:
    int firstBadVersion(int n) {
        
        int low=1,high=n;
        int mid=low+(high-low)/2;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(isBadVersion(mid)&&!isBadVersion(mid-1))
                return mid;
            if(isBadVersion(mid))
                high=mid;
            else //not bad
            {
                low=mid+1;
            }
        }
        return -1;
        
        
//         for(int i=1;i<=n;i++)
//         {
//             if(isBadVersion(i))
//             {
//                 return i;
//             }
//         }
//         return -1;
        
        
    }
};
