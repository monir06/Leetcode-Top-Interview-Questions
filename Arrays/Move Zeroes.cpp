class Solution
{
public:
	void moveZeroes(vector<int>& nums)
	{
		int j = 0, sz = nums.size();
		for (int i = 0; i < sz; i++)
			{
				if (nums[i]) nums[j++] = nums[i];
			}
		for (; j < sz; j++) nums[j] = 0;
	}
};
// Time Complexity O(n)
// Space Complexity O(1)