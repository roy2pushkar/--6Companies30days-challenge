class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        if(n==1)
        {
            return (double)n;
        }
        return (double)1/2;
    }
};
