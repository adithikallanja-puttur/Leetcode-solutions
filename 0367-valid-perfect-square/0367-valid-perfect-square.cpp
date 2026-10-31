class Solution {
public:
    bool isPerfectSquare(int num) {
        int b=0;
        
        int e=num;
        while(b<=e)
        {
            int mid=b+(e-b)/2;
            long long square=(long long)mid*mid;
            if(square==num)
            return true;
            else if(square<num)
            {
                b=mid+1;
            }
            else e=mid-1;
        }
        return false;
        
    }
};