class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int n=0;
        for(char ch:s)
        {
            if(ch==' ')
            n++;
            if(n==k)
            break;
            ans+=ch;
        }
        return ans;

    }
};