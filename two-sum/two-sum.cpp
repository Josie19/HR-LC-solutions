class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int sum,x=0;
        while(x<nums.size()){
            for(int j = 0;j<nums.size();j++){
                if(x==j){
                    break;
                }
                sum = nums[x]+nums[j];
                if(sum == target && ans.size() == 0){
                    ans.push_back(x);
                    ans.push_back(j);
                }
            }
            x++;
        }
        return ans;
    }
};