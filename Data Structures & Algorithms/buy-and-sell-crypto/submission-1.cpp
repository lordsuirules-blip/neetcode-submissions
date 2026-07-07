class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[i] < prices[j]) {
                    if (profit < (prices[j] - prices[i])) {
                        profit = (prices[j] - prices[i]);
                    }
                }
            }
        }
        return profit;
    }
};
