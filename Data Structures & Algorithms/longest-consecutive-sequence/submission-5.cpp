class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        s.reserve(nums.size());
        for (int x : nums) {
            s.insert(x);
        }
        int longest = 0;

        for (int i : s) {
            // If previous to the current no. do not exist it means this is the starting
            if (!s.count(i - 1)) {
                int curr = i;
                int length = 1;

                while (s.count(curr + 1)) {
                    curr++;
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
