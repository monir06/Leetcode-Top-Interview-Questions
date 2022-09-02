class Solution
{
public:
	int reverse(int x)
	{
		int mx = INT_MAX, mn = INT_MIN, ans = 0;
		while (x != 0)
			{
				ans = ans * 10 + x % 10;
				x /= 10;
				if (ans < 0 && ((mn / 10 == ans && x != 0 && x % 10 < mn % 10) || (mn / 10 > ans && x != 0))) return 0;
				if (ans > 0 && ((mx / 10 == ans && x != 0 && x % 10 > mx % 10) || (mx / 10 < ans && x != 0))) return 0;
			}
		return ans;
	}
};
// Time Complexity O(length of number)
// Space Complexity O(1)