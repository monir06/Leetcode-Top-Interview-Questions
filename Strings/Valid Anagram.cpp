class Solution
{
public:
	bool isAnagram(string s, string t)
	{
		int cnt[27] = {0};
		for (auto &i : s) cnt[i - 'a']++;
		for (auto &i : t) cnt[i - 'a']--;
		for (char c = 'a'; c <= 'z'; c++)
			if (cnt[c - 'a']) return false;
		return true;
	}
};
// Time Complexity O(n)
// Space Complexity O(26) ~= O(1)