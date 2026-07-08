class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (auto i : nums) {
            if (!s.insert(i).second) return true;
        }
        return false;
    }
};