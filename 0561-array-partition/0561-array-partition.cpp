class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int>vec;
        for(int i=0;i<nums.size();i=i+2)
        {
            vec.push_back(nums[i]);
        }
        int sum=0;
        for(int i=0;i<vec.size();i++)
        {
            sum+=vec[i];
        }
        
        return sum;
    }
};