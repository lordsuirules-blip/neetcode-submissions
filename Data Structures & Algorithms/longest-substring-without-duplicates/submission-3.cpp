class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;

        int maxLen = 0;
        int left = 0;
        int n = s.size();

        for (int right = 0; right < n; right++) {
            freq[s[right]]++;

            while (freq[s[right]] > 1) {
                freq[s[left]]--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
