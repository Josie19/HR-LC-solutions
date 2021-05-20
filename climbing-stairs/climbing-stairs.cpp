class Solution {
public:
    int calculate(int n, unordered_map<int,int>& m){
        if(m.find(n) != m.end())
            return m[n];
        m[n] = calculate(n-1,m) + calculate(n-2,m);
        return m[n];
    }
    int climbStairs(int n) {
        unordered_map<int,int> m;
        
        m[0] = 0;
        m[1] = 1;
        m[2] = 2;
        
        return calculate(n,m);
    }
};