//first method O(n*sizeof(int))

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v(num+1);
        for(int i=0;i<=num;i++)
        {
            int temp=i;
            int count=0;
            while(temp!=0)
            {
                if(temp&1)
                    count++;
                temp=temp>>1;
            }
            
            v.push_back(count);
        }
        
       
        return v;
    }
};

//second method using function

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v(num+1);
        for(int i=0;i<=num;i++)
        {
            int count= __builtin_popcount(i);
            v.push_back(count);
        }
        
      
        return v;
    }
};

//third method O(n)

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v(num+1);
        
        
        for(int i=1;i<=num;i++)
        {
            v[i]=v[i&(i-1)]+1;
        }
        return v;
    }
};
