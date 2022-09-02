class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int ans = 0, mn = INT_MAX;
        int sz = prices.size();
        for (int i = 0; i < sz; i++)
            {
                mn = min(mn, prices[i]);
                ans = max(ans, prices[i] - mn);
            }
        return ans;
    }
};
// Time Complexity O(n)
// Space Complexity O(1)