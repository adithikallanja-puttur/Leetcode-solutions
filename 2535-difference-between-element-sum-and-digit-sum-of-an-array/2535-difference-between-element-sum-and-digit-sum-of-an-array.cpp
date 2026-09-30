class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        vector<int>v;
        int s=0,num=0;
        for(int n:nums)
        {
            s+=n;
            if(n>9)
            {
                num=n;
                while(num>0)
                {
                  int  d=num%10;
                    v.push_back(d);
                    num/=10;
                }
            }
            else v.push_back(n);
        }
        int sum=0;
        for(int i=0;i<v.size();i++)
        sum+=v[i];
        return abs(sum-s);
        
    }
};