class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int k=nums[1]-nums[0];
     for(int i=1;i<nums.size()-1;i++)
     {
        if(nums[i+1]-nums[i]!=k)
        return false;

     }
     return true;

    }
};