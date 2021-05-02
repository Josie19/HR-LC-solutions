class Solution {
public:
    /*
    ANALYSIS
        ITERATIVE
            1.RUNTIME: O(LOGN)
            2.SPACE: O(X)
        RECURSIVE
            1. RUNTIME: O(XLOGN)
            2. SPACE: O(1)
    */
    int mySqrt(int x) {
        int s = 1;
        int e = x;
        int ans = 0;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            
            if(mid==x/mid)
            {
                return mid;
            }
            else if (mid<x/mid)
            {
               ans = mid;
                s= mid+1;
            }
            else e = mid-1;
            
        }
        return ans;
    }
};