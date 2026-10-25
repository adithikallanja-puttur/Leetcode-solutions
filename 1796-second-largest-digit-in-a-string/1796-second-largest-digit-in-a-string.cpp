class Solution {
public:
    int secondHighest(string s) {
        string si="";
        for(char ch:s)
        {
            if(ch>='0' && ch<='9')
            si+=ch;
        }
        vector<int>v;
        for(int i=0;i<si.length();i++)
        {
            v.push_back(si[i]-'0');
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        sort(v.begin(),v.end(),greater<int>());
        if(v.size()>=2)
        return v[1];
        else return -1;
    }
};