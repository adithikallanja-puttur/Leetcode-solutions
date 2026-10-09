class Solution {
public:
    int minimumSum(int num) {
        vector<int>vec;
        while(num>0)
        {
            int d=num%10;
            vec.push_back(d);
            num/=10;
        }
        sort(vec.begin(),vec.end());
        vector<int>v1;
        vector<int>v2;

        
            v1.push_back(vec[0]);
            v1.push_back(vec[2]);
            v2.push_back(vec[1]);
            v2.push_back(vec[3]);
        
        int n1=0,n2=0;
        for(int i=0;i<v1.size();i++)
        {
            n1=n1*10+v1[i];
        }
        for(int i=0;i<v2.size();i++)
        {
            n2=n2*10+v2[i];
        }
        return n1+n2;
        
    }
};