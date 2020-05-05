class Solution {
public:
    int findComplement(int num) {
        if(num==0)//because calculating log therefore calculation separately for zero
            return 1;
        else
        {
      int nofbits=(int)(log2(num))+1;// number of bits in number
            int flip=(pow(2,nofbits))-1;
        return (flip^num);
        }
        
    }
};
