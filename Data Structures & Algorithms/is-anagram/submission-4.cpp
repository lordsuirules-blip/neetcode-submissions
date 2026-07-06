class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char, int> mp;

    for (auto i : s)
        mp[i]++;

    if (t.size() != s.size())
        return false;

    for (auto i : t)
    {
        mp[i]--;
        if (mp[i] < 0)
            return false;
    }

    return true;

    }
};
