class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit;
        int max=0;
        int left=0;
        int right=1;
        while(right<prices.size())
        {
            if(prices[right] - prices[left] > 0)
            {
                profit = prices[right] - prices[left];
                if(profit>max)
                    max = profit;
            }
            else
                left = right;
            right += 1;
        }
        return max;
    }
};