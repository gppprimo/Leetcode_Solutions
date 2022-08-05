class NumArray {
private:
    vector<int> nums;
public:
    NumArray(vector<int> nums) {
        this->nums = nums;
    }

    int sumRange(int i, int j) {
        int sum = 0;
        for(int k = i; k <= j; k++)
            sum += this->nums[k];
        return sum;
    }
};
