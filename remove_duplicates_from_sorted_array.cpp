class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int dim = nums.size();
        vector<int>::iterator it = nums.begin();
        for(int i = dim - 1; i > 0; i--){
            for(int j = i - 1; j >= 0; j--){
                if(nums[i] == nums[j]){
                    nums.erase(it + i);
                    i = j;
                }
                else{
                    break;
                }
            }
        }
    return nums.size();
    }
};
