class Solution {
public:
    int countEven(int num) {
        int n=num;
        vector<int>v;
        int count=0;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        for(int i=0;i<v.size();i++)
        {
            int k=v[i],s=0;
            while(k>0)
            {
                int d=k%10;
                 s=s+d;
                 k/=10;  
            }
            if(s%2==0)  
            count++;     
         }
               return count;
        }
        
    
};