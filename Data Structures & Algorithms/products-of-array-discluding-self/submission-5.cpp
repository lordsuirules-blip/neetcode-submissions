class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        int zeroExist = 0;
        for (int i : nums) {
            if (i != 0)
                total *= i;
            else
                zeroExist++;
        }

        vector<int> ans;

        for (int i : nums) {
            if (zeroExist == 1) {
                if (i != 0)
                    ans.emplace_back(0);
                else
                    ans.emplace_back(total);
            } else if (zeroExist == 0) {
                ans.emplace_back(total / i);
            } else {
                ans.emplace_back(0);
            }
        }

        return ans;
    }
};
