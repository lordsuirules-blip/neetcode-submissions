class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        s.max_load_factor(0.25f);
        s.reserve(nums.size());
        for (int x : nums) {
            s.insert(x);
        }

        int longest = 0;

        for (int i : s) {
            if (s.find(i - 1) != s.end()) continue;

            int curr = i;
            int length = 1;

            while (s.find(++curr) != s.end()) length++;

            longest = max(longest, length);
        }
        return longest;
    }
};
