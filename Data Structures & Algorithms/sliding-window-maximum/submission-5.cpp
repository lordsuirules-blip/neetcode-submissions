class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            while (!dq.empty() && nums[i] > nums[dq.back()]) {
                dq.pop_back();
            }

            dq.emplace_back(i);

            if (i >= k - 1) {
                result.emplace_back(nums[dq.front()]);
            }
        }

        return result;
    }
};
