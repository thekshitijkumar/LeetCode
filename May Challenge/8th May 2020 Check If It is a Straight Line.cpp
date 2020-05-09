class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
       if(coordinates.size()==2)
           return true;
        else
        {
           // int m=0;
            int x=coordinates[0][0];
            int y=coordinates[0][1];
            int x1=coordinates[1][0];
            int y1=coordinates[1][1];
            float m;
            if((x1-x)!=0)//&&m=(y1-y)/(x1-x))
             m=(float)(y1-y)/(x1-x);
            else
               m=1000000;
            //     return false;
            x=x1;
            y=y1;
            for(int i=2;i<coordinates.size();i++)
            {
             
                    float mo;
                     x1=coordinates[i][0];
                     y1=coordinates[i][1];
                     if((x1-x)!=0)          //&&mo=(y1-y)/(x1-x))
                         mo=(float)(y1-y)/(x1-x);
                      else 
                         mo=1000000;
                    // int mo=(y1-y)/(x1-x);
                    if(mo!=m)
                        return false;
                    else
                    {
                        x=x1;
                        y=y1;
                    }
            }
            return true;
            
        }
        
    }
};
