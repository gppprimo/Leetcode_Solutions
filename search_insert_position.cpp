class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums[nums.size() - 1] < target)
            return nums.size();

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= target)
                return i;
        }
        return 0;
    }
};
