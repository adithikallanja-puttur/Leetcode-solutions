class Solution {
public:
    int bitwiseComplement(int n) {
        int i=0,d=0,a=0,k=0;
        if(n==0)
        return 1;
        while(n>0)
        {
            d=n%2;
            k=d^1;
            a=a+k*pow(2,i);
            i++;
            n/=2;
        }
        return a;
    }
};