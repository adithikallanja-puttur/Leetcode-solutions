class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0 && nums[i]%3==0)
            v.push_back(nums[i]);
        }
        int s=0;
        for(int i=0;i<v.size();i++)
        s=s+v[i];
        int ans=0;
        if(!v.empty())
         ans=s/v.size();
        return ans;
    }
};