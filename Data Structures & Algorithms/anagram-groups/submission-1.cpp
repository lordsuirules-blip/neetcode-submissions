class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> v;

        for (string& word : strs) {
            vector<int> freq(26, 0);

            for (char c : word) {
                freq[c - 'a']++;
            }

            string key;

            for (int i : freq) {
                key += to_string(i) + "#";
            }

            mp[key].emplace_back(word);
        }

        for (auto& it : mp) {
            v.emplace_back(it.second);
        }

        return v;
    }
};
