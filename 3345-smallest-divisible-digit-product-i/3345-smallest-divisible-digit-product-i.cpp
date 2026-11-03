class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++)
        {
            int k=i;
            long long p=1;
            while(k>0)
            {
                long long d=k%10;
                p*=d;
                k/=10;
            }
            if(p%t==0)
            return i;
        }
        return -1;
    }
};