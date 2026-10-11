class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int>vec;
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            vec.push_back(nums[i-1]);
        }
        int s=0;
        for(int i=0;i<vec.size();i++)
        {
            s=s+vec[i]*vec[i];
        }
        return s;
        
    }
};