class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            if(seen.count(n))
            return true;
            seen.insert(n);
        }
        return false;
    }
};