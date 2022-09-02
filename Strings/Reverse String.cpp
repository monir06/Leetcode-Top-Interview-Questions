class Solution
{
public:
	void reverseString(vector<char>& s)
	{
		int sz = s.size();
		for (int i = 0; i < sz / 2; i++)
			{
				int x = sz - i - 1;
				swap(s[i], s[x]);
			}
	}
};
// Time Complexity O(n)
// Space Complexity O(1)