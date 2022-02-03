class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        int minimum = INT_MAX;
        int profit_if_sold = 0;
        int max_profit = 0;
        for(int i = 0; i < n; i++){
            minimum = min(minimum, prices[i]);
            profit_if_sold = prices[i] - minimum;
            max_profit = max(max_profit, profit_if_sold);
        }
        if(max_profit>0){
            return max_profit;
        }
        return 0;
    }
};