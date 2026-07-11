class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (int i : nums) {
            mp[i]++;
        }

        vector<pair<int,int>> freqPair;

        for (auto& it : mp) {
            freqPair.emplace_back(it.second,it.first);
        }

        sort(freqPair.begin(), freqPair.end(), greater<pair<int, int>>());
        
        vector<int> ans;

        for (int i = 0; i< k ; i++) {
            ans.emplace_back(freqPair[i].second);
        }


        return ans;
    }
};
