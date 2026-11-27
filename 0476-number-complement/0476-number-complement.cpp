class Solution {
public:
    int findComplement(int num) {
        int a=0;
        int i=0;
        while(num>0)
        {
            int d=num%2;
            int k=d^1;
            a=a+k*pow(2,i);
            i++;
            num/=2;
        }
        return a;
    }
};