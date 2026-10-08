class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int k=arr.size()*0.25;
        unordered_map<int,int>f;
        for(int n:arr)
        {
            f[n]++;
        }
        for(auto it:f)
        {
            if(it.second>k)
            return it.first;
        }
        return -1;
    }
};