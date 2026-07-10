class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
    for (string word : strs)
    {
        string key = word;

        sort(key.begin(), key.end());

        mp[key].emplace_back(word);
    }

    vector<vector<string>> v;

    for (auto &it : mp)
    {
        v.emplace_back(it.second);
    }

    return v;
    }
};
