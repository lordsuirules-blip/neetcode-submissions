class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (int i : nums) {
            mp[i]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);

        for (auto& [num, freq] : mp) {
            buckets[freq].emplace_back(num);
        }

        vector<int> ans;

        for (int freq = (buckets.size() - 1);; freq--) {
            for (int i : buckets[freq]) {
                ans.emplace_back(i);
                if (ans.size() == k) {
                    return ans;
                }
            }
        }
    }
};
