class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int k=n;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<k;i++)
        v1.push_back(nums[i]);
        for(int i=k;i<nums.size();i++)
        v2.push_back(nums[i]);
        vector<int>s;
        for(int i=0;i<k;i++)
        {
            s.push_back(v1[i]);
            s.push_back(v2[i]);
        }
        return s;
    }
};