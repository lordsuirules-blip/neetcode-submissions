class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;

        int l = 0;
        int r = numbers.size() - 1;

        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target)
                break;
            else if (sum < target)
                l++;
            else
                r--;
        }

        ans.emplace_back(l + 1);
        ans.emplace_back(r + 1);

        return ans;
    }
};
