class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(128, -1);
        int maxLen = 0;
        int start = 0;

        for (int i = 0; i < s.size(); i++) {
            if (v[s[i]] >= start) {
                start = v[s[i]] + 1;
            }

            v[s[i]] = i;
            maxLen = max(maxLen, i - start + 1);
        }
        return maxLen;
    }
};
