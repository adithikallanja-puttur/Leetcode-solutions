class Solution {
public:
    int countDigits(int num) {
        
        int k=num;
        vector<int>v;
        while(num>0)
        {
            int d=num%10;
            v.push_back(d);
            num/=10;
        }
      int  count=0;
      for(int i=0;i<v.size();i++)
      {
        if(k%v[i]==0)
        count++;
      }
      return count;

    }
};