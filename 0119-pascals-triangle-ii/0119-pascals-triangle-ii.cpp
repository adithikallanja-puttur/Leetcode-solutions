class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v;
        v.push_back(1);
        long long res=1;
        for(int i=1;i<=rowIndex;i++)
        {
            res=res*(rowIndex-i+1);
            res=res/(i);
            v.push_back(res);
        }

        return v;
    }
};