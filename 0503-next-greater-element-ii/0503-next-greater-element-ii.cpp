class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        vector<int>nge(nums.size(),-1);
        for(int i=2*nums.size()-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums[i%nums.size()])
            s.pop();
            if(i<nums.size())
            nge[i]=s.empty()?-1:s.top();
            s.push(nums[i%nums.size()]);
        }
        return nge;
        
    }
};