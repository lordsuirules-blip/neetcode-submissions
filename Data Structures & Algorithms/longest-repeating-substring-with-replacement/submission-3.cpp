class Solution {
   public:
    int characterReplacement(string s, int k) {
        vector<int> v(26);
        int maxFreq = 0;
        int maxLength = 0;

        int l = 0;
        for (int r = 0; r < s.size(); r++) {
            v[s[r] - 'A']++;

            // Checks the current freq and the max ones added
            maxFreq = max(maxFreq, v[s[r] - 'A']);

            while (r - l + 1 - maxFreq > k) {
                v[s[l] - 'A']--;
                l++;
            }

            maxLength = max(maxLength, r - l + 1);
        }
        return maxLength;
    }
};
