class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> v1(26);
        vector<int> v2(26);

        for (char c : s1) {
            v1[c - 'a']++;
        }

        for (int i = 0; i < s1.size(); i++) {
            v2[s2[i] - 'a']++;
        }

        if (v1 == v2) return true;

        for (int i = s1.size(); i < s2.size(); i++) {
            v2[s2[i] - 'a']++;
            v2[s2[i - s1.size()] - 'a']--;

            if (v1 == v2) return true;
        }

        return false;
    }
};
