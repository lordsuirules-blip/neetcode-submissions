class Solution {
   public:
    int trap(vector<int>& height) {
        int LeftFinalMax = 0;
        int RightFinalMax = 0;
        int Area = 0;
        int n = height.size();

        int l = 0;
        int r = n - 1;

        while (l < r) {
            int currLMax = height[l];
            int currRMax = height[r];
            LeftFinalMax = max(currLMax, LeftFinalMax);
            RightFinalMax = max(currRMax, RightFinalMax);

            if (height[l] <= height[r]) {
                if (LeftFinalMax <= height[l + 1]) {
                    l++;
                } else {
                    Area += (LeftFinalMax - height[l + 1]);
                    l++;
                }
            } else {
                if (RightFinalMax <= height[r - 1]) {
                    r--;
                } else {
                    Area += (RightFinalMax - height[r - 1]);
                    r--;
                }
            }
        }
        return Area;
    }
};
