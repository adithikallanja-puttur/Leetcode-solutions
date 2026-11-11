class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>f;
        for(int n:nums)
        {
            f[n]++;
        }
        for(auto it:f)
        {
            if(it.second>2)
            return false;
        }
        return true;
    }
};