class Solution {
public:
    //sorting algorithm
    /*
    BEGIN
        1. BUBBLE SORT (ITERATIVE)
        2. SORT S AND T
        3. COMPARE
        4. RETURN TRUE IF IDENTICAL
        5. RETURN FALSE IF NOT IDENTICAL
    END
    */
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t)?true:false;
    }
};