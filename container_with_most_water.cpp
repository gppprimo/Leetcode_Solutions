class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0, dim = height.size();
        for(int i = 0; i < dim - 1; i++){
            for(int j = i; j < dim; j++){
                int tempArea = 0;
                if(height[i] >= height[j])
                    tempArea = height[j] * (j - i);
                else
                    tempArea = height[i] * (j - i);
                if(tempArea > maxArea)
                    maxArea = tempArea;
            }
        }
        return maxArea;
    }
};
