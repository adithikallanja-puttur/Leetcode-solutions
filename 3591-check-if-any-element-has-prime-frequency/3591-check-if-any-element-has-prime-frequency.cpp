class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>f;
        vector<int>v;
        for(int n:nums)
        {
            f[n]++;
        }
        for(auto it:f)
        {
            if(it.second>1)
            v.push_back(it.second);
        }
        if(v.empty())
        return false;
        for(int i=0;i<v.size();i++)
        { bool prime=true;
            int n=v[i];
            for(int i=2;i<n;i++)
            {
                if(n%i==0){
                    prime=false;
                    break;
                }
                
                
            }
            if(prime)
            return true;
        }
        return false;
    }
};