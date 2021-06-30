class Solution {
public:
    /*
    BEGIN
        1. ITERATIVE
        2. CHECKING FOR DUPLICATES
        3. USE MAP TO STORE UNIQUE VALUES
        4. RETURN FALSE IF ITERATOR FINDS VALUE ALREADY IN MAP
        5. RETURN TRUE IF ITERATOR DOES NOT FIND DUPLICATE
    END
    */
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> temp;
        int flag=1;
        for(int i = 0; i<nums.size();++i){
            int t = nums[i];
            temp[t]+=1;
        }
        for(auto it = temp.begin();it!=temp.end();++it){
            if(it->second >= 2)
                flag=0;
        }
        
        return (flag==0)?true:false;
    }
};