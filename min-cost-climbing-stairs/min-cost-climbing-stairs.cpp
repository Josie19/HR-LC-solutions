class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> minCost(cost.size()+1,0);
        //start at index 2 since index 0 and 1 count as 0 cost
        for(int i = 2; i < minCost.size();++i){
            minCost[i] += min(minCost[i-1]+cost[i-1],minCost[i-2]+cost[i-2]);
        }
        return minCost[minCost.size()-1];
    }
};