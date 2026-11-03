class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0;
        int k=nums[nums.size()-1];
        for(int i=0;i<nums.size()-1;i++)
        {
            c=c+(k-nums[i]);
        }
        return c;
    }
};