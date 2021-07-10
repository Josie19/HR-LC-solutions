class Solution {
public:
    /*
    BEGIN
        1. iterative
        2. solution:
            A. CHECK SIZE
            B. ENTER LOOP
            C. ENTER SECOND LOOP
                a. CALCULATE TEMPSUM
                b. DETERMINE IF THE TEMPSUM > MAXSUM
                    SET MAXSUM = TEMPSUM
                c. 
    END
    */
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int max = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            currSum += nums[i];
            if(max < currSum)
                max = currSum;
            if(currSum < 0)
                currSum = 0;
        }
        return max;
    }
};