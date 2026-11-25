class Solution {
public:
    bool checkGoodInteger(int n) {
        int s=0;
        int p=0;
        while(n>0)
        {
            int d=n%10;
            s+=d;
            p+=d*d;
            n/=10;
        }
        if((p-s)>=50)
        return true;
        return false;
    }
};