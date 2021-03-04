class Solution {
public:
    int PRANGE = INT_MAX, NRANGE = INT_MIN;
    int reverse(int x) {
        long res =  0;
        while(x){
            res = res*10 + x%10;
            x/=10;
        }
            
        if(res < NRANGE || res > PRANGE)//divide by 10 to control overflow
            return 0;
        return res;
    }
};