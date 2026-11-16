class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int k=0;
       int maxi=INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {k=0;
            for(int ch:sentences[i])
            {
                if(ch==' ')
                k++;
            }
            maxi=max(maxi,k);
        }
        return maxi+1;
    }
};