class Solution {
public:
vector<int>g(int row)
{
    long long res=1;
    vector<int>v;
    v.push_back(1);
    for(int i=1;i<row;i++)
    {
        res=res*(row-i);
        res=res/i;
        v.push_back(res);
    }
    return v;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
        ans.push_back(g(i));
        return ans;
        
    }
};