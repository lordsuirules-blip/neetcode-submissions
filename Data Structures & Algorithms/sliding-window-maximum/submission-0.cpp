class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int l = 0;

        for (int i = k - 1; i < nums.size(); i++) {
            int r = l;
            int maxValue = nums[r];
            int currMax = nums[r];
            while (r < i) {
                currMax = max(nums[r], nums[i]);
                maxValue = max(maxValue, currMax);
                r++;
            }
            l++;
            ans.emplace_back(maxValue);
        }
        return ans;
    }
};
