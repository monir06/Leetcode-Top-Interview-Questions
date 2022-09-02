class Solution
{
public:
	int firstUniqChar(string s)
	{
		int cnt[27] = {0};
		for (auto& i : s) cnt[i - 'a']++;
		for (int i = 0; i < s.size(); i++)
			{
				if (cnt[s[i] - 'a'] == 1) return i;
			}
		return -1;
	}
};
// Time Complexity O(n)
// Space Complexity O(26) ~= O(1)