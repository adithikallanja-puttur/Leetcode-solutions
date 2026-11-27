class Solution {
public:
    int hammingDistance(int x, int y) {
        int bit=x^y;
        int c=0;
        while(bit>0)
        {
            int d=bit%2;
            if(d==1)
            c++;
            bit/=2;
        }
        return c;
    }
};