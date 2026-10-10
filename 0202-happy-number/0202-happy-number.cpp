class Solution {
public:
    bool isHappy(int n) {
        int k;
        while(n>9)
        n=cal(n);
        
        return(n==1 || n==7);

        
    }
    int cal(int n)
    {int s=0;
        while(n>0)
        {
            int d=n%10;
            s+=d*d;
            n/=10;
        }
        return s;
    }


};