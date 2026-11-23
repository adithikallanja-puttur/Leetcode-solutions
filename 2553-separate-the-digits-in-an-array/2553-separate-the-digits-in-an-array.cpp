class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<10)
            v.push_back(nums[i]);
            else
            {
                vector<int>a;
                a=ans(nums[i]);
                for(int i=0;i<a.size();i++)
                v.push_back(a[i]);
            }
        }
        return v;
    }
    vector<int> ans(int n)
    {
        vector<int>r;
        while(n>0)
        {
            int d=n%10;
            r.push_back(d);
            n/=10;
        }
        reverse(r.begin(),r.end());
        return r;
    }
};