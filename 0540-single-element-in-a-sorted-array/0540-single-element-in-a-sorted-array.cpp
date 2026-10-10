class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>f;
        for(int n:nums)
        {
            f[n]++;
        }
        for(auto it:f)
        {
            if(it.second==1)
            return it.first;
        }
        return -1;
        
    }
};