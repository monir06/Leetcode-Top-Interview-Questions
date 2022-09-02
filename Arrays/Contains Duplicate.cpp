class Solution
{
public:
	bool containsDuplicate(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		for (int i = 1, sz = nums.size(); i < sz; i++)
			{
				if (nums[i] == nums[i - 1])
					return true;
			}
		return false;
	}
};
// Time Complexity O(nlogn)
// Space Complexity O(1)