class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>v;
        map<int,int>f;
        for(int n:nums)
        f[n]++;
        for(auto it:f)
        {
            if(it.second>1)
            v.push_back(it.first);
        }
        return v;
    }
};