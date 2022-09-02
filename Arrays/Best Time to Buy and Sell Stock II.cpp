class Solution
{
public:
	int maxProfit(vector<int>& prices)
	{
		int ans = 0, mn = prices[0], sz = prices.size();
		for (int i = 1; i < sz; i++)
			{
				if (mn < prices[i]) ans += prices[i] - mn;
				mn = prices[i];
			}
		return ans;
	}
};
// Time Complexity O(n)
// Space Complexity O(1)