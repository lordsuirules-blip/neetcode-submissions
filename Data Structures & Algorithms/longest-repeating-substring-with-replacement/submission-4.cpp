class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int maxFreq = 0;
        int maxLength = 0;

        int l = 0;
        for (int r = 0; r < s.size(); r++) {
            freq[s[r]]++;

            maxFreq = max(maxFreq, freq[s[r]]);

            while (r - l + 1 - maxFreq > k) {
                freq[s[l]]--;
                l++;
            }

            maxLength = max(maxLength, r - l + 1);
        }
        return maxLength;
    }
};
