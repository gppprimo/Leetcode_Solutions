vector<int> twoSum(vector<int>& nums, int target) {
        int indx1, indx2;
        for(std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
            for(std::vector<int>::iterator it2 = std::next(it); it2 != nums.end(); ++it2){
                if(*it + *it2 == target){
                    indx1 = std::distance(nums.begin(), it);
                    indx2 = std::distance(nums.begin(), it2);
                    return {indx1, indx2};
                }
            }
        }
        return {};
}
