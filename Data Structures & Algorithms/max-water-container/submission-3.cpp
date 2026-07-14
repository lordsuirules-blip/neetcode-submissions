class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int max_Area = 0;
        int n = heights.size();

        int l = 0;
        int r = n - 1;

        while (l < r) {
            int height = min(heights[l], heights[r]);
            int width = r - l;
            int curr_Area = height * width;

            max_Area = max(max_Area, height * width);

            if (heights[l] < heights[r] && (l < r)) {
                l++;
            } else if (heights[l] == heights[r] && (l < r)) {
                l++;
                r--;
            } else if (l < r) {
                r--;
            }
        }
        return max_Area;
    }
};
