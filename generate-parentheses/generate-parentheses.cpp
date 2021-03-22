class Solution {
public:
    void backtrack(int n, int l, int r, vector<string>& combos, string s){
        //approve the string if complete
        if(s.length() == 2*n){
            combos.push_back(s);
            return;
        }
        if(l<n)
            backtrack(n,l+1,r,combos,s+"(");
        if(r<l)
            backtrack(n,l,r+1,combos,s+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string> combos;
        if(n > 0)
            backtrack(n,0,0,combos,"");
        return combos;
    }
};