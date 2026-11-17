class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>v;
        v.push_back(first);
        for(int n:encoded)
        v.push_back(v.back()^n);
        return v;
    }
};