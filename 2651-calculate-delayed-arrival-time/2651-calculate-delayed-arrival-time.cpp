class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int k=arrivalTime+delayedTime;
        if(k>23)
        {
            k=k-24;
        }
        return k;
    }
};