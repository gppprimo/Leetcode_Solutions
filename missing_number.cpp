class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unsigned long dim = nums.size();
        int sumMissing = 0, sumNotMissing = 0;

        if(dim == 0)
            return 0;

        for(int i : nums)
            sumMissing += i;

        for(int i = 0; i <= dim; i++)
            sumNotMissing += i;

        return sumNotMissing - sumMissing;
    }
};
