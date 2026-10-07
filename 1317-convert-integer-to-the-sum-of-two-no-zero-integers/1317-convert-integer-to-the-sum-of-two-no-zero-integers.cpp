class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {


        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if((i+j)==n && solve(i) && solve(j))
                return {i,j};
            }
        }
        return {};
        
    }
    bool solve(int n)
    {
        while(n>0)
        {
            int d=n%10;
            if(d==0)
            return false;
            n/=10;
        }
        return true;
    }
};