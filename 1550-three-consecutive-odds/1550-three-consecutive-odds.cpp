class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        int c=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==1){
            c++;
              maxi=max(c,maxi);
          
            }
            else c=0;

        
        }
        if(maxi>=3)
        return true;
        else return false;
    }
};