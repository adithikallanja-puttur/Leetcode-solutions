class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i=1;i<=nums.size();i++)
        v.push_back(i);
        vector<int>ans;
        set_difference(v.begin(),v.end(),nums.begin(),nums.end(),back_inserter(ans));
        
         return ans;
        

    }
};