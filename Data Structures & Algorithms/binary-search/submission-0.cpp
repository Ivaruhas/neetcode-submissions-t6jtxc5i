class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftIndex = 0;
        int rightIndex = nums.size() - 1;
        while(leftIndex <= rightIndex)
        {
            int midIndex = leftIndex + (rightIndex - leftIndex)/2;
            if(nums[midIndex] == target)
            return midIndex;
            else if(nums[midIndex] > target)
            rightIndex = midIndex - 1;
            else
            leftIndex = midIndex + 1;
        }
        return -1;
    }
};
