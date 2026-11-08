class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int>f;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int more=target-a;
            if(f.find(more)!=f.end())
            return  {i,f[more]};
            f[a]=i;
        }
        return {-1,-1};
    }
};