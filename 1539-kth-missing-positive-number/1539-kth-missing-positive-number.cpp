class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        vector<int>v;
        set<int>s(arr.begin(),arr.end());
        for(int i=1;;i++)
        {
            if(s.find(i)==s.end() && count<=k)
            {
                count++;
                v.push_back(i);
            }
            if(count==k)
            break;
        }
        return v[k-1];
        
    }
};