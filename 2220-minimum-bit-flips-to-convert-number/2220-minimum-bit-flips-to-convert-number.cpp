class Solution {
public:
    int minBitFlips(int start, int goal) {
        int d=start^goal;
        int  c=0;
        while(d>0){
            int k=d%2;
            if(k==1)
            c++;
            d/=2;
        }
        return c;

    }
};