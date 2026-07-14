class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int max_area = 0;
        int n = heights.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int height = min(heights[i], heights[j]);
                int width = j - i;

                max_area = max(max_area, height * width);
            }
        }
        return max_area;
    }
};
