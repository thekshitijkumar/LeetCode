class Solution {
public:
   
    string removeKdigits(string num, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
   
    if(k==num.length())
        return "0";
        for(int i=0;i<k;i++)
        {
            int j=0;
            while(j<num.length()-1&&num[j]<=num[j+1])
                j++;
            num.erase(j,1);        //erasing number j till length 1
            
        }
       int i=0;
        while(i<num.length()&&num[i]=='0')
            num.erase(i,1);
        if(num.length()!=0)
        return num;
        else
            return "0";
        
    }
};
