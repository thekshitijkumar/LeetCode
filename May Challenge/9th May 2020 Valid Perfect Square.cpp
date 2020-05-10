class Solution {
public:
    bool isPerfectSquare(int n) {
         if(n<2)
             return true;
        int l=0,r=n/2;
        while(l<=r)
        {
            float mid=l+(r-l)/2;//consider mid as float or double int will complicate matter
            if(mid==(n/mid))
                return true;
            if(mid<(n/mid))
                l=mid+1;
            else
                r=mid-1;
        }
        return false;
        
    }
    

    
    
    
    
};
