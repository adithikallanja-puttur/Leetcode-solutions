class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>v;
        while(n>0)
        {
            int d=n%10;
            v.push_back(d);
            n/=10;
        }
        reverse(v.begin(),v.end());
    
        for(int i=1;i<v.size();i=i+2)
        {
            v[i]=v[i]*-1;  
              }
              int ans=0;      
 for(int i=0;i<v.size();i++)
 ans=ans+v[i];
        return ans ;
    }
};