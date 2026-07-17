class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;

        int n = s.size();
        int maxLen = 0;
        int l = 0;

        for (int i = 0; i < n; i++) {
            if (mp.count(s[i])) {
                l = max(l, mp[s[i]] + 1);
            }
            mp[s[i]] = i;
            maxLen = max(maxLen, i - l + 1);
        }

        return maxLen;
    }
};
